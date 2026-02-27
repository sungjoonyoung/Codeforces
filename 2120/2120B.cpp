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

void solve(void) {
    int N,M;cin>>M>>N;
    int answer=0;
    while(M--){
        int dx,dy;int x,y;
        cin>>dx>>dy>>x>>y;
        if(x==y and dx*dy==1)answer++;
        else if(x+y==N and dx*dy==-1)answer++;
    }
    cout<<answer<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}