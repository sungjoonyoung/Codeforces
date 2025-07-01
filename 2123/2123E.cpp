#include<iostream>
using namespace std;
int arr[200'003];
int strength[200'003];
void solve(void){
    for(int i=0;i<200'003;i++)arr[i]=strength[i]=0;
    int N;cin>>N;
    int power=0;
    int ind=N;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        arr[in]++;
        if(arr[in]>1)power++;
    }
    for(int i=0;i<=N+1;i++){
        if(arr[i]==0){
            ind=i;
            break;
        }
    }
    
    for(int i=ind;i<=N;i++)power+=(arr[i]>0);
    for(int i=0;i<ind;i++)strength[arr[i]]++;
    for(int i=N+1;i>0;i--)strength[i-1]+=strength[i];

    for(int i=0;i<=N;i++){
        cout<<ind-max(0,i-power)+1-strength[i+1]<<" ";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}