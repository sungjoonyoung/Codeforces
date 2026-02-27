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
bool vst[1001];
void solve(void){
    for(int i=0;i<1001;i++)vst[i]=0;
    ll N;cin>>N;
    vi v;v.clear();
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(vst[in])continue;
        vst[in]=1;
        v.push_back(in);
    }
    ll tmp=1;
    for(int i=0;i<18;i++)tmp*=10;
    ll dist_num=v.size();
    sort(all(v));
    cout<<*lower_bound(v.begin(),v.end(),dist_num)<<"\n";
    // cout<<v[lower_bound(v.begin(),v.end(),dist_num)-v.begin()]<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}