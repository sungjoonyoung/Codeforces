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
    int N;cin>>N;
    vi v;v.resize(N,0);
    for(int i=0;i<N;i++)cin>>v[i];
    int maxnum=-1;int maxind=-1;//얼마나 이득을 볼 수 있는가?
    for(int i=0+1;i<N-1;i++){//세개
        int tmp=abs(v[i]-v[i-1])+abs(v[i]-v[i+1])-abs(v[i+1]-v[i-1]);
        if(tmp>maxnum){
            maxnum=tmp;
            maxind=i;
        }
    }
    {
        int tmp=abs(v[0]-v[1]);
        if(tmp>maxnum){
            maxnum=tmp;
            maxind=0;
        }
    }
    {
        int tmp=abs(v[N-1]-v[N-2]);
        if(tmp>maxnum){
            maxnum=tmp;
            maxind=N-1;
        }
    }
    vi answer;answer.clear();
    for(int i=0;i<N;i++){
        if(i==maxind)continue;
        answer.push_back(v[i]);
    }
    ll out=0;
    for(int i=0;i<N-2;i++){
        out+=(ll)abs(answer[i]-answer[i+1]);
    }
    cout<<out<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}