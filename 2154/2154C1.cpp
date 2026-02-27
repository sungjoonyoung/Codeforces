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
일단 모두 끼리끼리 달라도 공약수가 있어야 함 
-> 1부터 제거해 보자고

아니다
근데 홀수들끼리 모두 서로소이면, 하나하나씩 늘리는 게 이득인가?
총 코스트는 최소2이다. 논리적으로!

그냥 소인수 분해를 하자

*/
int vst[200'001];
int num=0;
void solve(void) {
    num++;
    int N;cin>>N;
    vi A,B;A.resize(N);B.resize(N);
    for(int i=0;i<N;i++)cin>>A[i];
    for(int i=0;i<N;i++)cin>>B[i];
    for(int i=0;i<N;i++){
        for(int j=1;j<=sqrt(A[i]);j++){
            if(A[i]/j*j!=A[i])continue;
            int a=j;
            int b=A[i]/j;
            if(a!=1 and vst[a]==num){cout<<"0\n";return;}
            if(b!=1 and vst[b]==num){cout<<"0\n";return;}
            vst[a]=vst[b]=num;
        }
    }
    for(int i=0;i<N;i++){
        int tmp=A[i]+1;
        for(int j=1;j<=sqrt(tmp);j++){
            if(tmp/j*j!=tmp)continue;
            int a=j;
            int b=tmp/j;
            if(a!=1 and vst[a]==num){cout<<"1\n";return;}
            if(b!=1 and vst[b]==num){cout<<"1\n";return;}
        }
    }
    cout<<"2\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}