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
    int N;cin>>N;
    string str;cin>>str;
    int one=0;
    for(int i=0;i<str.size();i++)if(str[i]=='1')one++;
    if(one==0){cout<<"0\n";return;}
    if(str.size()%2){
        if(one%2){cout<<"-1\n";return;}
        else{
            cout<<str.size()-one<<"\n";
            for(int i=0;i<str.size();i++)if(str[i]=='0')cout<<i+1<<" ";
        }
    }
    else{
        if(one%2){
            cout<<str.size()-one<<"\n";
            for(int i=0;i<str.size();i++)if(str[i]=='0')cout<<i+1<<" ";
        }
        else{
            cout<<one<<"\n";
            for(int i=0;i<str.size();i++)if(str[i]=='1')cout<<i+1<<" ";
        }
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