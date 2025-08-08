#include<iostream>
using namespace std;
int arr[200'000];
void solve(void){
    int N,K;
    cin>>N>>K;
    int maxnum=0;
    int minnum=2'000'000'000;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        maxnum=max(maxnum,arr[i]);
        minnum=min(minnum,arr[i]);
    }
    int key=-1;
    for(int i=0;i<N;i++){
        int in;cin>>in;
        if(key==-2)continue;
        else if(key!=-1){
            if(in!=-1){
                int tmp=arr[i]+in;
                if(key!=tmp)key=-2;
            }
        }
        else{
            if(in!=-1){
                key=arr[i]+in;
            }
        }
    }
    if(key==-2)cout<<"0\n";
    else if(key!=-1){
        if(key-minnum>K)cout<<"0\n";
        else if(key<maxnum)cout<<"0\n";
        else cout<<"1\n";
    }
    else cout<<K-(maxnum-minnum)+1<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}