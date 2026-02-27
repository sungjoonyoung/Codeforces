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
ll mod=998'244'353;
ll power(ll a, ll e){
    if(e==-1)return 0;
    ll tmp=a;
    ll answer=1;
    while(e){
        if(e%2)answer*=tmp;
        e/=2;
        tmp*=tmp;
        answer%=mod;
        tmp%=mod;
    }
    return answer;
}
void solve(void) {
    int N;cin>>N;
    vl p,q;p.resize(N);q.resize(N);
    for(int i=0;i<N;i++)cin>>p[i];
    for(int i=0;i<N;i++)cin>>q[i];
    int l,r;
    l=r=-1;
    vector<pii>v;v.resize(2);
    // for(int i=1;i<N;i++)q[i]=max(q[i],q[i-1]);
    // for(int i=0;i<=N/2;i++)swap(q[i],q[N-1-i]);
    priority_queue<pii>pq;
    for(int i=0;i<N;i++){
        pq.push({p[i],i});
        pq.push({q[i],-1-i});
        vector<pii> tmp;tmp.clear();
        vector<pii> v;v.clear();
        for(int j=0;j<2;j++){
            int a=pq.top().first;
            int b=pq.top().second;
            tmp.push_back({a,b});
            pq.pop();
            if(b<0){
                b=-(b)-1;
                int val=p[i-b];
                if(a==val){a=a+1;val=-1;}
                v.push_back({max(a,val),min(a,val)});
            }
            else{
                int val=q[i-b];
                if(a==val){a=a+1;val=-1;}
                v.push_back({max(a,val),min(a,val)});
            }
        }
        sort(all(v));
        ll answer=0;
        answer+=power(2,v.back().first);
        answer%=mod;
        answer+=power(2,v.back().second);
        answer%=mod;
        cout<<answer<<" ";
        while(!tmp.empty()){
            pq.push({tmp.back().first,tmp.back().second});
            tmp.pop_back();
        }

    }
    cout<<"\n";
    // cout<<power(2,5)<<"A";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}