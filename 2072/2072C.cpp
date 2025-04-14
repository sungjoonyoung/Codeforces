#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void solve(void){
    long long n,k,tmpk;
    cin>>n>>k;
    tmpk=k;
    vector<int> v;
    while(k){
        v.push_back(k&1==1);
        k=k>>1;
    }
    long long c=0;
    while(1){
        if(v.size()==c or v[c]==0)break;
        c++;
    }
    long long tmpc=pow(2,c);
    if(tmpc<n){
        for(int i=0;i<tmpc;i++)cout<<i<<" ";
        for(int i=0;i<n-tmpc;i++)cout<<tmpk<<" ";
    }
    else{
        //cout<<"A";
        for(int i=0;i<n-1;i++)cout<<i<<" ";
        if(c==v.size() and (1<<(c-1))<=n-1) cout<<n-1;
        else cout<<tmpk<<" ";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}