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
    int tmp=0;
    int m=0;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(in==0)tmp++;
        if(in==-1)m++;
    }
    cout<<tmp+(m%2)*2<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}