#include<iostream>
using namespace std;
void solve(void){
    int N,K;
    cin>>N>>K;
    int one,zero;
    one=zero=0;
    for(int i=0;i<N;i++){
        char c;
        cin>>c;
        if(c=='0')zero++;
        else one++;
    }
    if(one<zero)swap(one,zero);
    //one>zero
    one-=N/2-K;
    zero-=N/2-K;

    if(one<0 or zero<0){cout<<"NO\n";return;}
    if(one%2 or zero%2){cout<<"NO\n";return;}
    if(one/2+zero/2!=K){cout<<"NO\n";return;}
    cout<<"YES\n";



    // if((one-zero)%2){cout<<"NO\n";return;}
    // if(K<=one/2+zero/2){
    //     int K=

    // }
    // else{cout<<"NO\n";return;}


    
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}