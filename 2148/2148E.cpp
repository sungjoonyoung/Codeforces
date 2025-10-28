#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(v) (v).begin(), (v).end()
using namespace std;
int man[200001];
int arr[200001];
int upp[200001];
void solve(void){
    int N,K;
    cin>>N>>K;
    for(int i=0;i<=N;i++)upp[i]=man[i]=0;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        upp[arr[i]]++;
    }
    for(int i=1;i<=N;i++){
        if(upp[i]%K){cout<<"0\n";return;}
        upp[i]/=K;
    }
    // cout<<upp[1]<<"A ";
    int l,r;
    l=r=0;
    ll answer=0;
    man[arr[r]]++;
    while(l<N){
        //l조건
        if(r==N-1 or man[arr[r+1]]==upp[arr[r+1]]){
            // cout<<l<<" "<<r<<"\n";
            answer+=r-l+1;
            man[arr[l]]--;
            l++;
            continue;
        }
        //
        r++;
        man[arr[r]]++;
    }
    cout<<answer<<"\n";
}
    
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}