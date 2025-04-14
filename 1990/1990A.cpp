#include<iostream>
using namespace std;
int arr[51];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        for(int i=0;i<51;i++)arr[i]=0;
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            int in;
            cin>>in;
            arr[in]++;
        }
        int even=0;
        int count=0;
        for(int i=1;i<=50;i++){
            if(arr[i])count++;
            if(arr[i] and arr[i]%2==0)even++;
        }
        if(even==count)cout<<"NO\n";
        else cout<<"YES\n";
    }
}