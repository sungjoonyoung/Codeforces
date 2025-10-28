#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
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
ll gcd(ll x,ll y){
    if(y==0)return x;
    return gcd(y,x%y);
}
void solve(void){
    int N;cin>>N;
    vector<ll>v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    for(ll i=2;i<500;i++){
        for(int j=0;j<N;j++){
            if(gcd(max(i,v[j]),min(i,v[j]))==1){
                cout<<i<<"\n";
                return;
            }
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
    
}