#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
void solve(void){
    ll N,K;cin>>N>>K;
    ll l,r;l=r=K;
    if(N==K){cout<<"0\n";return;}
    if(N<K){cout<<"-1\n";return;}
    for(int i=1;;i++){
        l=l*2-1;
        r=r*2+1;
        if(N<l){cout<<"-1\n";return;}
        if(l<=N and N<=r){cout<<i<<"\n";return;}
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}