#include<iostream>
using namespace std;
int arr[100'005];
void solve(void){
    int N,K;
    cin>>N>>K;
    fill(arr,arr+N+1,0);
    for(int i=1;i<=N;i++){
        int in;
        cin>>in;
        if(in==0)arr[i]++;
        arr[i]+=arr[i-1];
    }
    // for(int i=1;i<=N;i++)cout<<arr[i]<<" ";
    int count=0;
    for(int i=1;i<=N;i++){
        if(arr[i+K-1]-arr[i-1]==K){
            // cout<<i<<" A";
            count++;
            i=i+K;
        }
    }
    cout<<count<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}