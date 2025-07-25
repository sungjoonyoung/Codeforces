#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<queue>
#define ll long long
using namespace std;
ll gcd(ll x, ll y){
    if(y==0)return x;
    return gcd(y,x%y);
}
void solve(void){
    ll x,y,k;
    cin>>x>>y>>k;
    if(x<y)swap(x,y);
    ll gcdnum=gcd(x,y);
    x/=gcdnum;
    y/=gcdnum;
    int answer=0;
    // cout<<x<<" ";
    for(int i=k;i>=2;i--){
        while(x%i==0){
            cout<<x<<" "<<i<<"\n";
            x/=i;
            answer++;
        }
        while(y%i==0){
            y/=i;
            answer++;
        }
    }
    // cout<<x<<" "<<y<<" ";
    if(x==1 and y==1)cout<<answer<<"\n";
    else cout<<"-1\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}