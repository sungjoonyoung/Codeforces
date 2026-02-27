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
일단 가장 작은 수로 하면 모든 애들을 0으로 만들 수 있음
-> 오케이

근데 그 작은 수보다 약간 크면 그 가장 작은 수가 0이 될 수 있는 확률이 없음

*/
void solve(void){
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int minnum=2'000'000'000;
    for(int i=0;i<N;i++)minnum=min(v[i],minnum);
    int secnum=2'000'000'000;
    for(int i=0;i<N;i++){
        if(v[i]==minnum)continue;
        secnum=min(v[i],secnum);
    }
    if((secnum-minnum)<=minnum){ //일단 애초에 만들 수 없으면 말고
        cout<<minnum<<"\n";
        return;
    }
    cout<<secnum-minnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}