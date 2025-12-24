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
int vst['z'-'a'+1];
void solve(void){
    for(int i=0;i<'z'-'a'+1;i++)vst[i]=0;
    string a,b;cin>>a>>b;
    string answer;answer.clear();
    for(auto c:a)vst[c-'a']++;
    for(auto c:b){
        if(vst[c-'a'])vst[c-'a']--;
        else answer.push_back(c);
    }
    for(int i=0;i<'z'-'a'+1;i++)if(vst[i]){cout<<"Impossible\n";return;}
    sort(all(answer));
    int inda=0;
    for(int i=0;i<answer.size();i++){
        if(inda<a.size() and a[inda]<=answer[i]){
            cout<<a[inda];
            inda++;i--;
        }
        else{
            cout<<answer[i];
        }
    }
    for(;inda<a.size();inda++)cout<<a[inda];
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}