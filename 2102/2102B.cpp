#include<iostream>
using namespace std;
int arr[100000];
void solve(void){
    int N;
    cin>>N;
    int num;
    cin>>num;
    num=abs(num);
    int count=0;
    for(int i=0;i<N-1;i++){
        int in;
        cin>>in;
        count+=(num<abs(in));
    }
    if(N%2){
        if(count>=N/2)cout<<"YES";
        else cout<<"NO";
    }
    else{
        if(count>=N/2-1)cout<<"YES";
        else cout<<"NO";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}