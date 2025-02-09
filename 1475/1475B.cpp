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
        long long count=0;
        while(in-2020>=0){
            in-=2020;
            count++;
        }
        if(count<in)cout<<"NO\n";
        else cout<<"YES\n";
    }
}