#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void solve(void){
    int N,M,X,Y;
    cin>>N>>M>>X>>Y;
    ll answer=0;
    while(N--){
        ll tmp;cin>>tmp;
        answer++;
    }
    while(M--){
        ll tmp;cin>>tmp;
        answer++;
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