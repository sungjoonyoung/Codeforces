#include<iostream>
using namespace std;
int arr[200'001];
void solve(void){
    int N;
    cin>>N;
    for(int i=2;i<=N;i+=2)cout<<i<<" ";
    if(N%2)for(int i=N;i>0;i-=2)cout<<i<<" ";
    else for(int i=N-1;i>0;i-=2)cout<<i<<" ";
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}