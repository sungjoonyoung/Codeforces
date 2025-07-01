#include<iostream>
using namespace std;
void solve(void){
        int N;
        cin>>N;
        if(N%4)cout<<"Alice";
        else cout<<"Bob";
        cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}