#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v;
void solve(void){
    int N,K;
    cin>>N>>K;
    v.resize(N);
    int now;
    for(int i=0;i<N;i++){
        cin>>v[i];
        if(i==K-1)now=v[i];
    }
    sort(v.begin(),v.end());
    int water=1;
    for(int i=lower_bound(v.begin(),v.end(),now)-v.begin();i<N-1;i++){
        if(v[i+1]-v[i]>v[i]-water+1){
            cout<<"NO\n";
            return;
        }
        water+=v[i+1]-v[i];
    }
    
    cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}