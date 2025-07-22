#include<iostream>
#include<vector>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define MOD 998244353
ll dp[200'005];
using namespace std;
vector<pair<pair<ll,ll>,pair<ll,ll>>>v;
ll powf(ll x){
    int k=(MOD-2);
    ll answer=1;
    ll tmp=x;
    while(k){
        if(k%2)answer*=tmp;
        tmp*=tmp;
        k/=2;
        answer%=MOD;
        tmp%=MOD;
    }
    return (answer%MOD);
}

void solve(void){
    int N,M;
    cin>>N>>M;
    ll tmp=1;
    ll Q=1;
    for(int i=0;i<N;i++){
        ll x,y,p,q;
        cin>>x>>y>>p>>q;
        v.push_back({{x,y},{q-p,p}}); // 스타트 엔드 그리고 실패 성공
        tmp=(tmp*(q-p))%MOD;
        Q=(Q*q)%MOD;
    }
    //초기화
    dp[1]=tmp; 
    sort(v.begin(),v.end());
    for(auto a:v){
        dp[a.first.second+1]+=(((dp[a.first.first]*powf(a.second.first))%MOD)*a.second.second)%MOD;
        dp[a.first.second+1]%=MOD;
    }
    // cout<<powf(Q)<<" ";
    // cout<<dp[M+1]<<" "<<Q<<"\n";
    cout<<(dp[M+1]*powf(Q))%MOD;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    // cin>>T;
    while(T--)solve();
}