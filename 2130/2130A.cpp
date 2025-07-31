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
int arr[50];
void solve(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    ll answer=0;
    for(int i=0;i<N;i++){
        if(arr[i]==0)answer+=1;
        else answer+=arr[i];
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