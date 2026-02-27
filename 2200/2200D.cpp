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
    int N,X,Y;cin>>N>>X>>Y;
    queue<int> v,mid;
    vi midin;
    int l,r;l=r=0;
    for(int i=1;i<=N;i++){
        int in;cin>>in;
        if(X<i and i<=Y)midin.push_back(in);
        else v.push(in);
    }
    
    {
        int minnum=2'000'000'000;
        int minind=0;
        for(int i=0;i<midin.size();i++){
            if(minnum>midin[i]){
                minnum=midin[i];
                minind=i;
            }
        }
        for(int i=minind;i<midin.size();i++)mid.push(midin[i]);
        for(int i=0;i<minind;i++)mid.push(midin[i]);
    }

    while(!v.empty() and v.front()<=mid.front()){
        cout<<v.front()<<" ";
        v.pop();
    }
    while(!mid.empty()){
        cout<<mid.front()<<" ";
        mid.pop();
    }
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.pop();
    }
    cout<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}