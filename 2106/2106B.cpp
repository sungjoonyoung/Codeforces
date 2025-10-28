#include<iostream>
using namespace std;
void solve(void){
    int N,K;
    cin>>N>>K;
    int ind=0;
    int tmp=N;
    while(ind<N){
        if(ind<K)cout<<ind<<" ";
        else {
            tmp--;
            cout<<tmp<<" ";
        }
        ind++;
        
    }
    cout<<"\n";

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}