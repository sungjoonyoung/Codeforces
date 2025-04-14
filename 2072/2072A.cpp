#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,k,p;
        cin>>n>>k>>p;
        int a;
        a=abs((abs(k)-1)/p+1);
        if(k==0)cout<<"0\n";
        else if(a<=n)cout<<a<<"\n";
        else cout<<"-1\n";
    }
}