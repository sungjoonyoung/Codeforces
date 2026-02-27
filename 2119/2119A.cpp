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
1은 계속 더하고
XOR은 끝에만 스위치
*/
void solve(void) {
    ll A,B,X,Y;cin>>A>>B>>X>>Y;
    ll OA=A;
    ll XA=A^1LL;
    if(OA>B and XA>B){cout<<"-1\n";return;}
    // cout<<min(max(0LL,(B-OA))*X,max(0LL,(B-XA))*X+Y)<<"\n";
    ll answer=0;
    if(OA>B){
        A=XA;answer+=Y;
    }
    while(A!=B){
        if(A%2){
            answer+=X;A+=1;
        }
        else{
            if(X<Y){answer+=X;A+=1;}
            else{answer+=Y;A+=1;}
        }
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