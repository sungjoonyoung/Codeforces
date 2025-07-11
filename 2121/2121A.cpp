#include<iostream>
using namespace std;
void solve(void){
    int N,s;
    cin>>N>>s;
    int minnum=1000;
    int maxnum=-1;
    while(N--){
        int in;
        cin>>in;
        minnum=min(minnum,in);
        maxnum=max(maxnum,in);
    }
    if(maxnum<=s)cout<<s-minnum<<"\n";
    else if(s<=minnum)cout<<maxnum-s<<"\n";
    else cout<<min(s-minnum,maxnum-s)+maxnum-minnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}