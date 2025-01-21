#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        if(N<5){
            cout<<"-1\n";
            continue;
        }
        for(int i=1;i<=N;i+=2)if(i!=5)cout<<i<<" ";
        cout<<"5 4 ";
        for(int i=2;i<=N;i+=2)if(i!=4)cout<<i<<" ";
        cout<<"\n";
    }
}