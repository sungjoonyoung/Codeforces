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
    int T;cin>>T;
    vi v;v.resize(T+1,0);
    int lower=T;
    int upper=0;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(in==T)upper++;
        else if(in<T){
            if(v[in])continue;
            else{
                v[in]=1;
                lower--;
            }
        }
    }
    int answer=0;
    answer+=upper;
    answer+=max(0,lower-upper);
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}