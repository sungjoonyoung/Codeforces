#include<iostream>
#define ll long long
using namespace std;
long long countfunc(long long x){
    long long tmp=x;
    tmp-=x/2;
    tmp-=x/3;
    tmp-=x/5;
    tmp-=x/7;
    
    tmp+=x/6;
    tmp+=x/10;
    tmp+=x/14;
    tmp+=x/15;
    tmp+=x/21;
    tmp+=x/35;

    tmp-=x/(2*3*5);
    tmp-=x/(2*3*7);
    tmp-=x/(3*5*7);
    tmp-=x/(2*5*7);

    tmp+=x/(2*3*5*7);
    return tmp;
}
void solve(void){
    ll l,r;
    cin>>l>>r;
    //최악의 경우라 하더라고 소수가 아홉 개 곱해져 있겠네?
    cout<<countfunc(r)-countfunc(l-1)<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}