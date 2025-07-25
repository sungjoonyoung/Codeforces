#include<iostream>
using namespace std;
void solve(void){
    int in=0;
    string str;
    cin>>in;
    // in=stoi(str);
    for(int i=0;i<=100;i++){
        for(int j=i;j<=100;j++){
            if((i+j)*(i+j)==in){
                cout<<i<<" "<<j<<"\n";
                return;
            }
        }
    }
    cout<<"-1\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}