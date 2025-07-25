#include<iostream>
using namespace std;
void solve(void){
    string str;
    cin>>str;
    char minchar='9';
    for(auto a:str)minchar=min(minchar,a);
    cout<<minchar<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}