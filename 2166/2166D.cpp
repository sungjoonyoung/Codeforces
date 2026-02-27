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
ll MOD=998'244'353;
int cnt[5001];
ll dp[5001];
/*
각자 파싱하는 건 알아서 하는데, 어떤 수가 갑자기 사라질 때는 분배를 잘 해야 돼

어떤 수 전체가 사라지고 나머지 애들보다 적으면 -> 맘대로


*/
void solve(void){
    for(int i=0;i<=5001;i++)dp[i]=cnt[i]=0;
    //
    int N;cin>>N;
    int M=-1;//수 최댓값
    for(int i=0;i<N;i++){
        int in;cin>>in;
        cnt[in]++;
        M=max(M,in);
    }
    vector<int> v; v.clear();
    for(int i=1;i<=M;i++){
        if(cnt[i])v.push_back(cnt[i]);
    }
    sort(rall(v));
    // for(auto c:v)cout<<c<<" ";
    // cout<<"\n";
    ll answer=0;
    dp[0]=1;
    for(int i=0;i<v.size();i++){
        int curx=v[i];
        for(int j=N;j-curx>=0;j--){
            dp[j]+=dp[j-curx]*curx;
            dp[j]%=MOD;
        }
    }
    for(int i=v[0];i<=N;i++){ //<- 이게 겁나 중요
        answer+=dp[i];
        answer%=MOD;
    }
    cout<<answer<<"\n";
    // cout<<answer<<"\n";
    // cout<<5*4*3*2<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}