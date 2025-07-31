#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define yn(b) cout << ((b) ? "YES\n" : "NO\n")
using namespace std;
void solve(void){
    int N;
    cin>>N;
    vector<pair<pair<int,int>,int>> v;
    vector<int> arr(N*2+1,0);
    for(int i=0;i<N;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({{a,b},i});
    }
    sort(all(v));
    int s=1,e=1;
    for(int i=0;i<N;i++){
        e=max(e,v[i].first.second);
        for(;s<=e;s++)arr[s]=v[i].second+1;
    }

    vector<int> answer;
    for(int i=1;i<=N*2;i++){
        if(arr[i]==0)continue;
        if(arr[i]!=arr[i-1])answer.push_back(arr[i]);
    }
    // for(int i=1;i<=N*2;i++) cout<< arr[i]<<" ";
    cout<<answer.size()<<"\n";
    for(auto a:answer)cout<<a<<" ";
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}