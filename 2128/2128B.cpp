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
    for(int i=0;i<N/2;i++){
        int l=v[i];
        int r=v[N-i-1];
        if(i%2){
            if(l<r)cout<<"LR";
            else cout<<"RL";
        }
        else{
            if(l<r)cout<<"RL";
            else cout<<"LR";
        }
    }
    if(N%2)cout<<"L";
    cout<<"\n";
    return;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}