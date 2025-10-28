#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<set>
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
priority_queue<pair<int,pii>>pq;
set<int> s;
void solve(void){
    int N,K,X;cin>>N>>K>>X;
    vector<int> v;v.resize(N);
    
    for(int i=0;i<N;i++)cin>>v[i];
    sort(all(v));

    while(pq.size())pq.pop();
    s.clear();

    for(int i=0;i<N-1;i++){
        if((v[i+1]-v[i])%2){
            int d=(v[i+1]-v[i])/2;
            pq.push({d,{v[i]+d,-1}});
            pq.push({d,{v[i]+d+1,1}});
        }
        else{
            int d=(v[i+1]-v[i])/2;
            pq.push({d,{v[i]+d,-1}});
            pq.push({d,{v[i]+d,1}});
        }
    }
    pq.push({v.front(),{0,+1}});
    pq.push({X-v.back(),{X,-1}});
    
    while(K--){
        // cout<<pq.size()<<"A";
        int curx=pq.top().second.first;
        int direction=pq.top().second.second;
        int curd=pq.top().first;
        pq.pop();
        if(curx<0 or X<curx)continue;
        if(s.find(curx)==s.end()){
            cout<<curx<<" ";
            s.insert(curx);
        }
        else K++;
        if(curx+direction<0 or X<curx+direction)continue;
        if(s.find(curx+direction)!=s.end())continue;
        pq.push({curd-1,{curx+direction,direction}});
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}