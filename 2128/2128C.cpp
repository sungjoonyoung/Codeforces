#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
void solve(void){
    vector<int> v;
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int minnum=v[0];
    for(int i=0;i<N;i++){
        if(minnum*2<=v[i]){cout<<"NO\n";return;}
        minnum=min(minnum,v[i]);
    }
    cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}