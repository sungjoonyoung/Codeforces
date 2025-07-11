#include<iostream>
using namespace std;
void solve(void){
    int N,K;
    cin>>N>>K;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<N;i++){
        if(str[i]=='1')count++;
    }
    if(count<=K)cout<<"Alice";
    else if(N/2<K)cout<<"Alice";
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