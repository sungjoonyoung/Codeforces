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
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    vi sv;sv.resize(N);
    for(int i=0;i<N;i++)sv[i]=v[i];
    sort(all(sv));
    vi tmp;tmp.clear();
    for(int i=0;i<v.size();i++){
        if(v[i]!=sv[i])tmp.push_back(v[i]);
    }
    if(tmp.empty()){cout<<"-1\n";return;}
    sort(all(tmp));
    int l=sv.front();
    int r=sv.back();
    int d=(r-l+1)/2;
    if(l+d<=tmp.front()){
        cout<<tmp.front()-(l+d)+d<<"\n";
        return;
    }
    if(r-d>=tmp.back()){
        cout<<r-d-tmp.back()+d<<"\n";
        return;
    }

    int tmpl=*lower_bound(all(tmp),l+d);
    int tmpr=*(upper_bound(all(tmp),r-d)-1);
    cout<<d+min(tmpl-(l+d),(r-d)-tmpr)<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}