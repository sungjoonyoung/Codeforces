#include<iostream>
using namespace std;
int arr[1000];
void solve(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];

    int minnum=1'000'000;
    for(int i=0;i<N-1;i++){
        int upper=arr[i];
        int lower=arr[i];
        for(int j=i+1;j<N;j++){
            if(lower-1<=arr[j] and arr[j]<=upper+1){
                minnum=min(minnum,j-i-1);
                break;
            }
            lower=min(lower,arr[j]);
            upper=max(upper,arr[j]);
        }
    }

    for(int i=0;i<N/2;i++)swap(arr[i],arr[N-i-1]);
    for(int i=0;i<N-1;i++){
        int upper=arr[i];
        int lower=arr[i];
        for(int j=i+1;j<N;j++){
            if(lower-1<=arr[j] and arr[j]<=upper+1){
                minnum=min(minnum,j-i-1);
                break;
            }
            lower=min(lower,arr[j]);
            upper=max(upper,arr[j]);
        }
    }


    if(minnum==1'000'000)cout<<"-1\n";
    else cout<<minnum<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}