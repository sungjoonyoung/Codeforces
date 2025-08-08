#include<iostream>
using namespace std;
void solve(void){
    int N;
    cin>>N;
    int zero,one;
    zero=one=0;
    string str;
    cin>>str;
    for(int i=0;i<N;i++){
        if(str[i]=='1')one++;
        else zero++;
    }
    int answer=0;
    for(int i=0;i<N;i++){
        if(str[i]=='1'){
            answer+=one-1;
        }
        else {
            answer+=one+1;
        }
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}