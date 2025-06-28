#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
void solve(void){
    int N;
    cin>>N;
    vector<int> v;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int lo,ro,le,re;
    lo=le=-1;
    ro=re=N;
    for(int i=0;i<N;i++){
        le++;
        if(v[le]%2==0)break;
    }
    for(int i=0;i<N;i++){
        lo++;
        if(v[lo]%2==1)break;
    }
    for(int i=0;i<N;i++){
        ro--;
        if(v[ro]%2==1)break;
    }
    for(int i=0;i<N;i++){
        re--;
        if(v[re]%2==0)break;
    }
    int maxnum=-1;
    if(le<=re)maxnum=max(maxnum,re-le);
    if(lo<=ro)maxnum=max(maxnum,ro-lo);
    cout<<N-maxnum-1<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}
