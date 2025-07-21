#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int,pair<int,int>>>v;
int visited[100'001];
int DFS(int x,int K){
    int l,r;
    l=v[x].second.first;
    r=v[x].second.second;
    if(l<=K and K<=r)return 1;
    pair<int,pair<int,int>> tmpl={l,{0,0}};
    pair<int,pair<int,int>> tmpr={r,{0,0}};
    int i=lower_bound(v.begin(),v.end(),tmpl)-v.begin();
    int j=upper_bound(v.begin(),v.end(),tmpr)-v.begin()-1;
    if(l<=v[i].first and v[i].first<=r and l<=v[j].first and v[j].first<=r){
        for(int k=i;k<=j;k++){
            if(visited[k])continue;
            visited[k]=1;
            if(DFS(k,K))return 1;
        }
    }
    return 0;
}
void solve(void){
    int N,K;
    cin>>N>>K;
    fill(visited,visited+N,0);
    v.resize(N);
    for(int i=0;i<N;i++){
        int l,r,w;
        cin>>l>>r>>w;
        v[i]={w,{l,r}};
    }
    sort(v.begin(),v.end());
    for(int i=N-1;i>=0;i--){
        if(visited[i])continue;
        if(v[i].first<K)break;
        visited[i]=1;
        if(DFS(i,K)){
            cout<<v[i].first<<"\n";
            return;
        }
    }
    cout<<K<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}