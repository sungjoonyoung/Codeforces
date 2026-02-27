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
아주 단순하게
2
2 4 6 3 이면 밥이 지고
2
2 3 9 11 이면 밥이 승

연결은 엘리스 총알
비연결은 밥 총알

근데 열결중에서 밥이 공격할 수 있는 게 있고
없는 게 있음

그럼 가운데에서 땅따먹기 하다가?
서로 거 먹어.

M*sqrt(2000000)*log2(N)


*/
int stt[2'000'001];
int dot[2'000'001];
void solve(void) {
    int N,M;cin>>N>>M;
    for(int i=0;i<=N+M;i++)stt[i]=dot[i]=0;
    int A_bullet=0;
    int B_bullet=0;
    int M_bullet=0;
    int target=0;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(stt[in])continue;
        target++;
        stt[in]=1;
        for(int j=in;j<=N+M;j+=in)dot[j]++;
    }
    for(int i=0;i<M;i++){
        int in;cin>>in;
        if(dot[in]==target)A_bullet++;
        else if(dot[in]==0)B_bullet++;
        else M_bullet++;
    }
    M_bullet&=1;
    if(M_bullet){//홀수면
        if(A_bullet>=B_bullet)cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    else{
        if(A_bullet>B_bullet)cout<<"Alice\n";
        else cout<<"Bob\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}