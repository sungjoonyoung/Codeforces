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
void solve(void){
    int N;cin>>N;
    // cout<<(1LL<<16)<<'\n';//65536
    // for(int i=0;i<(1<<N);i++)vst[i]=0;
    for(int i=N;i>=0;i--){
        int table=0;
        for(int j=0;j<i;j++){
            table<<=1;
            table|=1;
        }
        // 밑의 놈들
        for(int j=0;j<(1<<N-i);j+=2){
            cout<<(table|(j<<i))<<" ";
        }
    }
    
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}