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
int dp[361][361][361];//{누적값} [인덱스][max][k 사용의 정도]
int max_arr[361][361];//{맥스 상관 안 한 블락의 최댓값} [인덱스][k의 사용의 정도]
void solve(void){
    int N,K;cin>>N>>K;
    vector<pii> v;v.clear();
    for(int i=0;i<=K;i++)for(int j=0;j<=K;j++)for(int k=0;k<=K;k++)max_arr[i][j]=dp[i][j][k]=-1e9;
    dp[0][0][0]=0;
    max_arr[0][0]=0;
    v.push_back({0,0});
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(v.back().first<in)v.push_back({in,i});
    }
    v.push_back({0,N});
    int answer=0;
    for(int i=1;i<v.size()-1;i++){
        for(int _use=0;_use<=K;_use++){
            for(int ksum=0;ksum<=K;ksum++){
                int gap=_use*(v[i+1].second-v[i].second);
                dp[i][_use][ksum]=dp[i-1][_use][ksum]+gap;
                if(ksum-_use>=0 and _use<=v[i].first)
                    dp[i][_use][ksum]=max(dp[i][_use][ksum],max_arr[i-1][ksum-_use]+gap);
                max_arr[i][ksum]=max(dp[i][_use][ksum],max_arr[i][ksum]);
                answer=max(dp[i][_use][ksum],answer);
            }
        }
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}