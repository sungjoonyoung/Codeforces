#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<long long> v;
void solve(void){
    int n,k;
    cin>>n>>k;
    v.clear();
    v.resize(k+1);
    for(int i=0;i<k;i++){
        int b,c;
        cin>>b>>c;
        v[b]+=c;
    }
    sort(v.begin(),v.end(),greater<>());
    long long sum=0;
    for(int i=0;i<min(n,k+1);i++){
        sum+=v[i];
    }
    cout<<sum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}