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
/*
1 2 3 4 5 6
1 1 1 4 5 6
1 1 2 4 5 6 이렇게 하며냐 안 되고
1 1 3 3 5 5 
줄여야 할 걸 계단식으로 깎아
*/
void solve(void) {
    ll N,M;cin>>N>>M;
    vl v;v.resize(N+1);
    for(ll i=1;i<=N;i++)v[i]=1;
    ll tmp=M-N;//얼마나 채워야 해?
    if(tmp<0){cout<<"-1\n";return;}
    ll maxnum=N;
    while(tmp){
        if(maxnum==0){cout<<"-1\n";return;}
        if(maxnum-1<=tmp){
            v[maxnum]=maxnum;
            tmp-=maxnum-1;
            maxnum--;
        }
        else{
            if(tmp+1>N or v[tmp+1]==tmp+1){cout<<"-1\n";return;}
            v[tmp+1]=tmp+1;
            break;
        }
    }

    int root=0;
    for(int i=N;i>0;i--){
        if(i==v[i]){
            root=i;
            cout<<i<<"\n";
            break;
        }
    }
    for(int i=N;i>0;i--){
        if(i!=v[i]){
            cout<<i<<" "<<v[i]<<"\n";
        }
        else if(i==v[i]){
            if(i==root)continue;
            else cout<<i<<" "<<root<<"\n";
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}