#include<iostream>
#define ll long long
using namespace std;
int suffix[200'000];
int prefix[200'000];
int a[200'000];
int b[200'000];
void solve(void){
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)cin>>a[i];
    for(int i=0;i<M;i++)cin>>b[i];

    int suf=0;
    for(int i=0;i<N;i++){
        if(suf<M and a[i]>=b[suf]){
            suffix[suf]=i;
            suf++;
        }
    }
    if(suf==M){cout<<"0\n";return;}

    int pre=M-1;
    for(int i=N-1;i>=0;i--){
        if(pre>=0 and a[i]>=b[pre]){
            prefix[pre]=i;
            pre--;
        }
    }
    int minnum=2'000'000'000;
    if(suf==M-1)minnum=min(minnum,b[suf]);
    if(pre==0)minnum=min(minnum,b[pre]);

    // cout<<suf<<" "<<pre<<" ";
    for(int i=1;i<M-1;i++){
        int l=i-1;
        int r=i+1;
        if(l<suf and pre<r){
            if(suffix[l]<prefix[r])minnum=min(minnum,b[i]);
        }
    }
    //cout<<suf<<" "<<pre<<"\n";
    if(minnum==2'000'000'000)cout<<"-1\n";
    else cout<<minnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}