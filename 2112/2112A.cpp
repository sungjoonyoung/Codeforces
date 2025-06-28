#include<iostream>
using namespace std;
void solve(void){
    int a,x,y;
    cin>>a>>x>>y;
    if(x>=y)swap(x,y);
    if(x<=a and a<=y){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    return;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}