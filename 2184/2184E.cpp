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
ll P[100'001];
ll l[100'001];
ll vst[100'001];
vl ind[100'001];
ll answer[100'001];
ll find(ll x){
    if(x==P[x])return x;
    return P[x]=find(P[x]);
}
void uni(int x,int y){
    int px=find(x);
    int py=find(y);
    l[py]+=l[px];
    P[px]=py;
}
void solve(void) {
    ll N;cin>>N;
    vl v;v.resize(N);
    for(int i=0;i<=N;i++){
        P[i]=i;l[i]=1;
        vst[i]=0;
        ind[i].clear();
        answer[i]=0;
    }
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N-1;i++){
        v[i]=abs(v[i]-v[i+1]);
        ind[v[i]].push_back(i);
    }
    for(int i=N-1;i>=1;i--){
        answer[i]=answer[i+1];
        for(int j=0;j<ind[i].size();j++){
            int curind=ind[i][j];
            vst[curind]=1;
            answer[i]+=l[find(curind)]*(l[find(curind)]+1)/2;

            if(curind-1>=0 and vst[curind-1]){
                answer[i]-=l[find(curind-1)]*(l[find(curind-1)]+1)/2;
                answer[i]-=l[find(curind)]*(l[find(curind)]+1)/2;
                uni(curind,curind-1);
                answer[i]+=l[find(curind)]*(l[find(curind)]+1)/2;
            }
            if(curind+1<N-1 and vst[curind+1]){
                answer[i]-=l[find(curind+1)]*(l[find(curind+1)]+1)/2;
                answer[i]-=l[find(curind)]*(l[find(curind)]+1)/2;
                uni(curind,curind+1);
                answer[i]+=l[find(curind)]*(l[find(curind)]+1)/2;
            }
        }
    }
    for(int i=1;i<N;i++)cout<<answer[i]<<" ";
    cout<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}