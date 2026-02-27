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
    int N,M;cin>>N>>M;
    string str;cin>>str;
    int answer=0;
    for(int i=0;i<str.size();i++){
        [&](){
            if(str[i]=='1'){
                for(int j=i-1;j>=max(0,i-M+1);j--){
                    if(str[j]=='1')return;
                }
                answer++;
                // i+=M;i--;
            }
        }();
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