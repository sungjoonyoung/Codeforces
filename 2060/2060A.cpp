#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int tmp=c-b;
        int tmptmp=a+b;
        int p=(tmp==a+b)+(d==c+tmp)+1;
        int q=(tmptmp+c==d)+1;
        cout<<max(p,q)<<"\n";
    }
}