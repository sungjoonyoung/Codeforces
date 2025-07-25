#include<iostream>
using namespace std;
long long gcd(long long x, long long y){
    if(y==0)return x;
    return gcd(y,x%y);
}
void solve(void){
    long long x,y,k;
    cin>>x>>y>>k;
    if(k>=max(x,y)){cout<<"1\n";return;}
    long long tmp=gcd(max(x,y),min(x,y));
    if(k>=max(x/tmp,y/tmp)){cout<<"1\n";return;}
    cout<<"2\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}