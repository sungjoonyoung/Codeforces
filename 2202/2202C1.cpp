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
void solve(void) {
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    vector<int>s;s.clear();
    int answer=0;
    for(int i=v.size()-1;i>=0;i--){
        if(s.empty())s.push_back(v[i]);
        else{
            while(!s.empty() and s.back()-1==v[i]){
                s.pop_back();
            }
            s.push_back(v[i]);
        }
    }
    cout<<s.size()<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}