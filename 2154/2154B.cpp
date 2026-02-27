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
모두 같게 하는 건?

중간이 커야 되는 경우
1 2 3
-> 3를 줄이기?

1 3 2
-> 굳

2 1 3
-> 그냥 빼거나 (2<)
-> 연산 하고 양쪽을 어려번 빼 (2)

2 3 1
-> 굳

3 1 2
-> 그냥 빼거나 (2<)
-> 연산하고 양쪽을 여러번 뺴 (2)

3 2 1
-> 그냥 빼거나 (2<=)
-> 연산하고 양쪽을 여러번 빼 (2)

65 85 19 53 21 79 92 29 96

걍 디피인가

*/
void solve(void) {
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int maxnum=-1;
    for(int i=0;i<N;i++){
        maxnum=max(maxnum,v[i]);
        if(i%2)v[i]=maxnum;
    }
    int answer=0;
    for(int i=0;i<N;i+=2){
        int tmp=-1;
        if(0<i){
            tmp=max(tmp,v[i]-v[i-1]+1);
        }
        if(i<N-1){
            tmp=max(tmp,v[i]-v[i+1]+1);
        }
        answer+=max(tmp,0);
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