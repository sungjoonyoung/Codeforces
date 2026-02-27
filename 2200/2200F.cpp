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
ll dp[2][200'001];
void solve(void) {
    int N,M;cin>>N>>M;
    vector<pll> v[2];v[0].resize(N);v[1].resize(N);
    for(int i=0;i<N;i++)cin>>v[0][i].first>>v[0][i].second; // 에너지 캐파
    for(int i=0;i<N;i++)v[1][i]=v[0][i];
    sort(all(v[0]));
    sort(all(v[1]));
    { // 하나 비어있는
        // priority_queue<pll> pq; // 캐파 에너지
        minpq(pll) pq;
        ll now=0;
        for(int i=0;i<=N;i++){
            while(!pq.empty() and pq.top().first<i){
                now-=pq.top().second;
                pq.pop();
            }
            while(!v[0].empty() and pq.size()<i){
                if(v[0].back().second>=i){
                    pq.push({v[0].back().second,v[0].back().first});
                    now+=v[0].back().first;
                }
                v[0].pop_back();
            }
            dp[0][i]=now;
        }
    }
    { // 꽉 차 있는
        // priority_queue<pll> pq; // 캐파 에너지
        minpq(pll) pq;
        ll now=0;
        for(int i=0;i<=N;i++){
            while(!pq.empty() and pq.top().first<i){
                now-=pq.top().second;
                pq.pop();
            }
            while(!v[1].empty() and pq.size()<=i){
                if(v[1].back().second>=i){
                    pq.push({v[1].back().second,v[1].back().first});
                    now+=v[1].back().first;
                }
                v[1].pop_back();
            }
            dp[1][i]=now;
        }
    }
    // int k=0;
    // for(int i=0;i<M;i++)cin>>k>>k;
    // cout<<dp[1][1]<<"\n";
    // cout<<dp[0][1]<<"\n";
    // cout<<"\n";
    ll flag=-1;
    for(int i=0;i<=N;i++)flag=max(flag,dp[1][i]);

    for(int i=1;i<=N;i++)dp[1][i]=max(dp[1][i],dp[1][i-1]);
    for(int i=1;i<=N;i++)dp[0][i]=max(dp[0][i],dp[0][i-1]);

    while(M--){
        ll x,y;cin>>x>>y;
        cout<<max(flag,max(dp[1][y],dp[0][y]+x))<<" ";
    }
    cout<<"\n";
    // cout<<dp[0][5];
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}