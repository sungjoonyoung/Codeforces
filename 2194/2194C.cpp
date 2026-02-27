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
int dp['z'-'a'+1][50'001];
int is_val(int alphabet,int s,int l,int N){
    for(int i=s;i<N;i+=l){
        if(!dp[alphabet][i]){
            return 0;
        }
    }
    return 1;
}
void solve(void) {
    int N,K;cin>>N>>K;
    for(int a=0;a<'z'-'a'+1;a++)for(int i=0;i<N;i++)dp[a][i]=0;
    for(int i=0;i<K;i++){
        string str;cin>>str;
        for(int j=0;j<str.size();j++)dp[str[j]-'a'][j]=1;
    }
    // 26*N*sqrt(N)
    vi v;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            v.push_back(i);
            v.push_back(N/i);
        }
    }
    sort(all(v));

    for(auto l:v){
        int possible=0;
        for(int s=0;s<l;s++){
            int op=0;
            for(int i=0;i<'z'-'a'+1;i++){
                op|=is_val(i,s,l,N);
            }
            possible+=op;
        }
        if(possible==l){
            string str;
            for(int s=0;s<l;s++){
                for(int i=0;i<'z'-'a'+1;i++){
                    if(is_val(i,s,l,N)){
                        // cout<<(char)(i+'a');
                        str.push_back((char)(i+'a'));
                        break;
                    }
                }
            }
            for(int i=0;i<N/l;i++)cout<<str;
            cout<<"\n";
            return;
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}