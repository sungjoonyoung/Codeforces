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
    int N,A;cin>>N>>A;
    vector<int> v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    // sort(all(v));
    ll left,right;
    left=right=0;
    ll mid=0;
    for(int i=0;i<N;i++){
        if(v[i]==A)mid+=A;
        else if(v[i]<A)left++;
        else right++;
    }
    if(left<right)cout<<A+1<<"\n";
    else cout<<A-1<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}