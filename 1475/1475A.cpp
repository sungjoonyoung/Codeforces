#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        long long in;
        cin>>in;
        while(in%2==0){
            in/=2;
        }
        if(in==1)cout<<"NO\n";
        else cout<<"YES\n";
    }
}