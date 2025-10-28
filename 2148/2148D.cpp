#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
ll arr[200000];
void solve(void){
    vector<ll> oddv;
    int N;
    cin>>N;
    ll oddn,even;
    oddn=even=0;
    ll answer=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]%2){
            oddn++;
            oddv.push_back(arr[i]);
        }
        else{
            even++;
            answer+=arr[i];
        }
    }
    if(oddn==0){cout<<"0\n";return;}
    sort(oddv.begin(),oddv.end(),[&](ll a,ll b){
        return a>b;
    });
    for(int i=0;i<oddv.size()/2+(oddv.size()%2);i++)answer+=oddv[i];
    cout<<answer<<'\n';
}
    
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}