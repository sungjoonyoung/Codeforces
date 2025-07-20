#include<iostream>
using namespace std;
int arr[10];
void solve(void){
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++)cin>>arr[i];
    int i=0;
    while(arr[i]==0)i++;
    int j=N-1;
    while(arr[j]==0)j--;
    if(j-i+1<=K)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}