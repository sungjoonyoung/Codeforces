#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>
#include<cmath>
#define ll long long
using namespace std;
int dp[1'000'001];
int gcd(int x, int y){
    if(y==0)return x;
    return gcd(y,x%y);
}
int dfs(int x, int K){
    if(x<=K){
        dp[x]=1;
        return 1;
    }
    int minnum=2'000'000'000;
    if(dp[x]!=minnum)return dp[x];

    for(int i=2;i<=min((int)sqrt(x),K);i++){
        if(x%i==0)minnum=min(minnum,dfs(x/i,K)+1);
    }
    //if(minnum==2'000'000'000)minnum=1;
    dp[x]=min(dp[x],minnum);
    return dp[x];
}
void solve(void){
    ll x,y,k;
    cin>>x>>y>>k;
    fill(dp,dp+max(x,y)+1,2'000'000'000);
    if(x<y)swap(x,y);
    ll gcdnum=gcd(x,y);
    x/=gcdnum;
    y/=gcdnum;
    dfs(x,k);
    dfs(y,k);
    dp[1]=0;
    // cout<<x<<" "<<y<<" ";
    if(dp[x]==2'000'000'000 or dp[y]==2'000'000'000)cout<<"-1\n";
    else cout<<dp[x]+dp[y]<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}