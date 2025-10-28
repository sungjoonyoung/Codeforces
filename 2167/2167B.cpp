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
int arr['z'-'a'+1];
int abb['z'-'a'+1];
void solve(void){
    int N;cin>>N;
    string a,b;cin>>a>>b;
    for(int i=0;i<'z'-'a'+1;i++)arr[i]=abb[i]=0;
    for(int i=0;i<N;i++)arr[a[i]-'a']++;
    for(int i=0;i<N;i++)abb[b[i]-'a']++;
    for(int i=0;i<'z'-'a'+1;i++)if(arr[i]!=abb[i]){cout<<"NO\n";return;}
    cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
    
}