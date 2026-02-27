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
ll C[31][31];
void solve(void){
    int N,K;cin>>N>>K;
    // cout<<log2(1'000'000'000)<<"\n";//30
    /*
    자릿수 + 1의 갯수 - 1
    */
    // cout<<C[4][2]<<"\n";
    ll answer=N;
    int i=0;
    for(i=0;(1<<i)<(N);i++){
        int tmp=i;
        for(int j=0;j<min(K-tmp,i+1);j++){
            answer-=C[i][j];
        }
    }
    if(i+1<=K)answer--;
    //마지막 N 체크
    cout<<answer<<"\n";
    // cout<<C[30][9]<<"A";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    for (int i = 0; i <= 30; i++)C[i][0] = 1;
    for (int i = 1; i <= 30; i++) {
        for (int j = 1; j < i; j++) {
            C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]);
        }
        C[i][i] = 1;
    }

    while(T--)solve();
}