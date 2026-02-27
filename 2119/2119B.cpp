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
ll pf(ll x){
    return x*x;
}
void solve(void) {
    int N;cin>>N;
    ll sx,sy,ex,ey;cin>>sx>>sy>>ex>>ey;
    vl v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    ll sum=0;
    for(int i=0;i<N;i++)sum+=v[i];
    ll midsq=(ex-sx)*(ex-sx)+(ey-sy)*(ey-sy);
    
    ll maxnum=-1;
    for(int i=0;i<N;i++)maxnum=max(maxnum,v[i]);
    if(pf(maxnum)<midsq){
        if(pf(sum)>=midsq){cout<<"Yes\n";return;}
    }
    else{
        sum-=maxnum;
        if(maxnum-sum<=0){cout<<"Yes\n";return;}
        if(pf(maxnum)-2LL*maxnum*sum+pf(sum)<=midsq){cout<<"Yes\n";return;}
    }
    // cout<<sum<<" "<<maxnum<<" ";
    cout<<"No\n";

}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}