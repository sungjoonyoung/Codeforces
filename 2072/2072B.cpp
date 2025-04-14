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
        long long u,d;
        u=d=0;
        while(N--){
            char c;
            cin>>c;
            if(c=='-')u++;
            else d++;
        }
        cout<<(u/2)*(u-u/2)*d<<"\n";
    }
}