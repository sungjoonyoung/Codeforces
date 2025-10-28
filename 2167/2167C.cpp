#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
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
void solve(void){
    int N;cin>>N;
    vector<int> v;
    int odd,even;odd=even=0;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        v.push_back(in);
        if(in%2)odd++;
        else even++;
    }
    if(odd and even){
        sort(all(v));
        for(auto a:v)cout<<a<<" ";
    }
    else {
        for(auto a:v)cout<<a<<" ";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
    
}