#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
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
int gcd(int a,int b){
    if(a<b)swap(a,b);
    if(b==0)return a;
    return gcd(b,a%b);
}
int arr[5001];
void solve(void) {
    for(int i=0;i<5001;i++)arr[i]=0;
    int N;cin>>N;
    vi v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    int total=v[0];
    for(int i=0;i<N;i++)total=gcd(total,v[i]);
    for(int i=0;i<N;i++)v[i]/=total;
    int answer=0;
    for(int i=0;i<v.size();i++)answer+=(v[i]!=1);
    if(answer!=N){cout<<answer<<"\n";return;}

    for(int i=0;i<5001;i++)arr[i]=2'000'000'000;
    for(auto x:v)arr[x]=0;
    for(int i=1;i<v.size();i++){
        for(int j=1;j<5001;j++){
            if(arr[j]==2'000'000'000)continue;
            int key=gcd(v[i],j);
            arr[key]=min(arr[key],arr[j]+1);
        }
    }

    cout<<answer+arr[1]-1<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}