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
내가 엘리스라면
복수소수 중에 가장 작은 걸 맨 뒤에 놔 버리겠어.

*/
void solve(void) {
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    {//시작부터
        int tmp=0;
        for(int i=1;i<N;i++)if(v[i]>=v[i-1])tmp++;
        if(tmp==N-1){cout<<"Bob\n";return;}
    }
    for(int i=0;i<N;i++){//복수소수가 있기만 하면 엘리스 승
        int tmp=v[i];
        for(int p=2;p<=sqrt(v[i]);p++){
            if(tmp%p!=0)continue;
            if(tmp%p==0){
                while(tmp%p==0)tmp/=p;
                if(tmp==1)v[i]=p;
                else{cout<<"Alice\n";return;}
            }
        }
    }
    {
        int tmp=0;
        for(int i=1;i<N;i++)if(v[i]>=v[i-1])tmp++;
        if(tmp==N-1){cout<<"Bob\n";return;}
        else{cout<<"Alice\n";return;}
    }
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}