#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void solve(void){
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(all(v));
    int answer=-2'000'000'005;
    for(int i=0;i<N;i+=2)answer=max(answer,v[i+1]-v[i]);
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}