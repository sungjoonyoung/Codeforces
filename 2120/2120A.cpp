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
    int a[3][2];
    for(int i=0;i<3;i++)for(int j=0;j<2;j++)cin>>a[i][j];
    if(a[0][0]>a[0][1]){//세로
        if(a[1][0]+a[2][0]==a[0][0] ){ //위 아래
            if(a[1][1]==a[2][1] and a[1][1]+a[0][1]==a[0][0])cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(a[1][0]==a[2][0] and a[1][0]==a[0][0] and a[0][1]+a[1][1]+a[2][1]==a[0][0]){ //왼오
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else{
        if(a[1][1]+a[2][1]==a[0][1] ){ //위 아래
            if(a[1][0]==a[2][0] and a[1][0]+a[0][0]==a[0][1])cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(a[1][1]==a[2][1] and a[1][1]==a[0][1] and a[0][0]+a[1][0]+a[2][0]==a[0][1]){ //왼오
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}