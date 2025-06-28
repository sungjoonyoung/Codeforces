#include<iostream>
using namespace std;
void solve(void){
    int n,m,p,q;
    cin>>n>>m>>p>>q;
    if(n==p and m!=q)cout<<"NO";
    else if(n==p and m==q)cout<<"YES";
    else if(n%p)cout<<"YES";
    else if(n/p*q==m)cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}