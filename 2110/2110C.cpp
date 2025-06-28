#include<iostream>
#include<vector>
#include<utility>
using namespace std;
vector<pair<int,int>> wall(200005);
int arr[200005];
int answer[200005];
void solve(void){
    int N;
    cin>>N;
    int ind=1;

    for(int i=1;i<=N;i++)cin>>arr[i];
    for(int i=1;i<=N;i++)cin>>wall[i].first>>wall[i].second;
    int upper,lower;
    lower=upper=0;

    for(int t=1;t<=N;t++){
        if(arr[t]==-1) upper++;
        else if(arr[t]==1){
            upper++;
            lower++;
        }
        if(wall[t].first>lower){
            int n=0;
            for(int i=0;i<wall[t].first-lower+n;i++){
                if(t-i==0){
                    cout<<"-1\n";
                    return;
                }
                if(arr[t-i]!=-1){
                    n++;
                    continue;
                }
                arr[t-i]=1;
            }
        }



        lower=max(lower,wall[t].first);
        upper=min(upper,wall[t].second);
        if(lower>upper){
            cout<<"-1\n";
            return;
        }
    }
    for(int i=1;i<=N;i++){
        if(arr[i]!=-1)cout<<arr[i]<<" ";
        else cout<<"0 ";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}