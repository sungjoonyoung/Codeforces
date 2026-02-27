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
    ll N,H,K;cin>>N>>H>>K;
    vl v;v.resize(N+1);
    for(int i=1;i<=N;i++)cin>>v[i];

    vl pre_min,suf_max,pre_sum;
    pre_min.resize(N+1);
    pre_min[0]=2'000'000'000;
    for(int i=1;i<=N;i++)pre_min[i]=min(pre_min[i-1],v[i]);
    suf_max.resize(N+1);
    suf_max[N]=v[N];
    for(int i=N-1;i>=1;i--)suf_max[i]=max(suf_max[i+1],v[i]);
    pre_sum.resize(N+1);
    pre_sum[0]=0;
    for(int i=1;i<=N;i++)pre_sum[i]=v[i]+pre_sum[i-1];

    ll answer=0;
    {
        ll how_manyshot=H/pre_sum.back();
        H-=pre_sum.back()*how_manyshot;
        answer+=how_manyshot*N;
        answer+=how_manyshot*K;
        if(H==0)answer-=K;
    }
    if(H==0){cout<<answer<<"\n";return;}
    
    for(ll i=1;i<N;i++){//마지막은 볼 필요 없곘지?
        ll tmp=pre_sum[i];
        if(pre_min[i]<suf_max[i+1]){
            tmp-=pre_min[i];
            tmp+=suf_max[i+1];
        }
        if(tmp>=H){
            cout<<answer+i<<"\n";
            return;
        }
    }
    cout<<answer+N<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}