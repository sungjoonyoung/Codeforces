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
    vi v;v.push_back(0);
    ll answer=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1'){
            v.push_back(0);
            answer++;
        }
        else v.back()++;
    }
    if(answer){
        for(int i=1;i<v.size()-1;i++){
            answer+=v[i]/3;
        }
        if(str.front()=='0'){
            answer+=(v[0]+1)/3;
        }
        else{
            answer+=v[0]/3;
        }
        if(str.back()=='0'){
            answer+=(v.back()+1)/3;
        }
        else{
            answer+=v.back()/3;
        }
        cout<<answer<<"\n";
    }
    else{
        cout<<(v.back()-1)/3+1<<"\n";
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}