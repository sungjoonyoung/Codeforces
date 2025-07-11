#include<iostream>
using namespace std;
int arr[200000];
int answer[200000];
void solve(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)answer[i]=0;

    for(int i=0;i<N;i++)cin>>arr[i];
    int before=1'000'000'000;
    for(int i=0;i<N;i++){
        if(arr[i]<=before)answer[i]=1;
        before=min(arr[i],before);
    }
    
    before=0;
    for(int i=N-1;i>=0;i--){
        if(arr[i]>=before)answer[i]=1;
        //before=arr[i];
        before=max(arr[i],before);
    }
    
    for(int i=0;i<N;i++)cout<<answer[i];
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}