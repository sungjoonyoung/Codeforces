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
    ll answer=1;
    ll tmp=1;
    for(int i=1;i<N;i++){
        if(v[i-1]>v[i]){
            tmp+=i;
            tmp++;
        }
        else{
            tmp++;
        }
        answer+=tmp;
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