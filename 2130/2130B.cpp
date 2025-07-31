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
int cnt[3];
void solve(void){
    int N,K;
    cin>>N>>K;
    for(int i=0;i<3;i++)cnt[i]=0;
    ll tmp=0;
    for(int i=0;i<N;i++){
        int in;
        cin>>in;
        cnt[in]++;
        tmp+=in;
    }
    if(tmp==K){cout<<"-1\n";return;}
    tmp=K-tmp;
    // cout<<tmp<<"A";
    if(tmp>=2){cout<<"-1\n";return;}
    // else if(tmp%2==0 or tmp>=5){cout<<"-1\n";return;}
    else{
        while(cnt[0]--)cout<<"0 ";
        while(cnt[2]--)cout<<"2 ";
        while(cnt[1]--)cout<<"1 ";
        cout<<"\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}