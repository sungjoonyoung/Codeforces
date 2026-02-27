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
ll mod=1'000'000'000+7;
ll power(ll x,ll y){
    ll out=1;
    ll tmp=x;
    while(y){
        if(y%2){
            out*=tmp;
            out%=mod;
        }
        y/=2;
        tmp*=tmp;
        tmp%=mod;
    }
    return out;
}
ll C(ll N,ll K){
    ll answer=1;
    for(int i=N;i>N-K;i--){
        answer*=i;
        answer%=mod;
    }
    for(int i=1;i<=K;i++){
        answer*=power(i,mod-2);
        answer%=mod;
    }
    return answer;
}
void solve(void) {
    ll a,b,k;cin>>a>>b>>k;
    ll N,M=1;
    N=(a-1)*k+1;N%=mod; //최소 a개 b개 있는 세팅
    M=C(N,a);
    M%=mod;
    M*=b-1;
    M%=mod;
    M*=k;
    M%=mod;
    M++;
    M%=mod;
    cout<<N<<" "<<M<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}