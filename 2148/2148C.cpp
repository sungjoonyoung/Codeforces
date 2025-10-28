#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void solve(void){
    int N,M;
    cin>>N>>M;
    int answer=0;
    int time=0;
    int curx=0;
    while(N--){
        int x,y;
        cin>>x>>y;
        //같고 짝수
        if(curx==y and ((x-time)%2==0))answer+=((x-time));
        //다르고 짝수
        if(curx!=y and ((x-time)%2==0))answer+=((x-time)-1);
        //같고 홀수
        if(curx==y and ((x-time)%2==1))answer+=((x-time)-1);
        //다르고 홀수
        if(curx!=y and ((x-time)%2==1))answer+=((x-time));
        time=x;
        curx=y;
    }
    answer+=(M-time);
    cout<<answer<<"\n";
}
    
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}