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
    ll x,y;cin>>x>>y;
    ll cur=x;
    if(y>0){
        cur-=y*2;
    }
    else cur+=y*4;


    if(cur<0)cout<<"NO\n";
    else if(cur%3==0 or cur%6==0 or cur%6==3)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}