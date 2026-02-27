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
vector<ll> v;
bool func(ll upper,ll target){ // 최대 이 개수로 타겟을 만들어
    for(int i=v.size()-1;i>=0;i--){
        ll many=target/(1LL<<v[i]);
        target-=(1LL<<v[i])*min(upper,many);
        if(target<=0)return 1;
    }
    return 0;
}
void solve(void) {
    ll S,M;cin>>S>>M;
    ll tmpS=S;ll tmpM=M;
    v.clear();
     //{ind}
    for(int i=0;tmpS>0 or tmpM>0;i++){
        if(tmpM&1LL>0)v.push_back(i);
        if(tmpS&1LL>0){
            if(v.empty()){cout<<"-1\n";return;}
        }
        tmpS>>=1;
        tmpM>>=1;
    }

    ll s=0;
    ll e=1'000'000'000'000'000'000;
    while(s+1!=e){
        ll mid=(s+e)/2;
        if(func(mid,S))e=mid;
        else s=mid;
    }
    cout<<e<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}