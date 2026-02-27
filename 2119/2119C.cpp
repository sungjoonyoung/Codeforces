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
void solve(void) {
    ll N,L,R,K;cin>>N>>L>>R>>K;
    if(N%2){cout<<L<<"\n";return;}
    ll tmp=(1LL<<60);
    while((tmp&L)==0){tmp>>=1;}
    if((tmp<<1)<=R and N>2){
        if(N==K or N-1==K)cout<<(tmp<<1)<<"\n";
        else cout<<L<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}
/*
고정란
김상현
정이현
진민성
성준영
*/