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
vi _map[300'001];
void solve(void) {
    ll N,M;cin>>N>>M;
    for(ll i=0;i<N;i++){
        _map[i].clear();
        for(int j=0;j<M;j++){
            int in;cin>>in;
            if(in)_map[i].push_back(j);
        }
    }
    ll answer=0;
    for(ll i=0;i<N;i++)answer+=_map[i].size();
    cout<<(answer/2)*(answer-answer/2)<<"\n";
    answer/=2;
    ll y=0;
    string out;out.clear();
    for(ll i=0;i<N;i++){
        ll tmp=_map[i].size();
        if(answer==0){
            while(y!=M){
                y++;
                cout<<"R";
                // out.push_back('R');
            }
        }
        else if(tmp<=answer){
            answer-=tmp;
        }
        else{
            ll ind=tmp-answer;
            while(y!=_map[i][ind]){
                y++;
                cout<<"R";
                // out.push_back('R');
            }
            answer=0;
        }
        cout<<'D';
        // out.push_back('D');
    }
    // while(out.size()!=N+M)out.push_back('R');
    // cout<<out;
    while(y!=M){
        y++;
        cout<<"R";
        // out.push_back('R');
    }
    cout<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}
    // for(int i=0;i<=N;i++){
    //     _map[i].resize(M);
    //     if(i==0)for(int j=0;j<=M;j++)_map[i][j]=0;
    //     else {
    //         _map[i][0]=0;
    //         for(int j=1;j<=M;j++)cin>>_map[i][j];
    //     }
    // }