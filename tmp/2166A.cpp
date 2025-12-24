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
int cnt[100];
void solve(void){
    int N;cin>>N;
    for(int i=0;i<100;i++)cnt[i]=0;
    int maxnum=0;
    char tmp;
    for(int i=0;i<N;i++){
        char c;cin>>c;
        tmp=c;
        cnt[c-'a']++;
    }
    for(int i=0;i<'z'-'a'+1;i++){
        if(i==tmp-'a')continue;
        maxnum+=cnt[i];
    }

    cout<<maxnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}