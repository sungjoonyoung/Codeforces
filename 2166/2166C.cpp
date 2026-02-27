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
int arr[200'001];
vi v;
void solve(void){
    int N;cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    arr[N]=arr[0];
    v.clear();
    for(int i=0;i<N;i++){
        v.push_back(max(arr[i],arr[i+1]));
    }
    sort(all(v));
    ll answer=0;
    for(int i=0;i<N-1;i++){
        answer+=v[i];
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