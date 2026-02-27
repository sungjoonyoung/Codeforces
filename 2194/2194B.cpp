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
void solve(void) {
    ll N,X,Y;cin>>N>>X>>Y;
    vl v;v.resize(N+1);
    for(int i=1;i<=N;i++)cin>>v[i];
    vl pre;pre.resize(N+1);pre[0]=0;
    for(int i=1;i<=N;i++)pre[i]=v[i]/X*Y;
    for(int i=1;i<=N;i++)pre[i]=pre[i]+pre[i-1];
    ll answer=-1;
    for(int i=1;i<=N;i++){
        ll tmp=v[i];
        tmp+=pre[N]-pre[i]+pre[i-1];
        answer=max(answer,tmp);
    }
    cout<<answer<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}