#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define ll long long
using namespace std;
ll arr[200001];
vector<int> adj[200001];
void dfs(int b,int x, ll bxmin, ll bxmax){
    ll tmp=arr[x];
    arr[x]=max(arr[x],arr[x]-bxmin);
    arr[x]=max(arr[x],arr[x]-bxmax);
    for(int i=0;i<adj[x].size();i++){
        int nx=adj[x][i];
        if(b==nx)continue;
        dfs(x,nx,tmp-bxmax,arr[x]);
    }
}
void solve(void){
    int N;
    cin>>N;
    fill(arr,arr+N+1,0);
    for(int i=1;i<=N;i++)adj[i].clear();
    for(int i=1;i<=N;i++)cin>>arr[i];
    for(int i=0;i<N-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0,1,0,0);
    for(int i=1;i<=N;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}