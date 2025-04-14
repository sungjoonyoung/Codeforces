#include<iostream>
using namespace std;
void solve(void){
    int N;
    cin>>N;
    int before;
    cin>>before;
    int key=0;
    for(int i=0;i<N-1;i++){
        int in;
        cin>>in;
        if(!(abs(before-in)==5 or abs(before-in)==7))key=1;
        before=in;
    }
    if(key)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}