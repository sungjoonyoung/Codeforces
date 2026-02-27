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
    int N;cin>>N;
    vector<ll> v;v.resize(N+1);
    v[0]=0;
    for(int i=1;i<=N;i++)cin>>v[i];
    for(int i=1;i<=N;i++)v[i]+=v[i-1];
    ll L=1LL<<60;
    ll R=-(1LL<<60);
    for(ll i=1;i<=N;i++){
        // L=l*l-l-p(l-1) min
        L=min(L,i*i-i-v[i-1]);
        // R=r*r+r-p(r) max
        R=max(R,i*i+i-v[i]-L);
    }
    cout<<max(v[N],v[N]+R)<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}