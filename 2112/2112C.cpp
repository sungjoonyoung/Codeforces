#include<iostream>
#include<algorithm>
using namespace std;
int arr[5000];
int N;
void solve(void){
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    long long answer=0;
    for(int i=0;i<N-1;i++)for(int j=i+1;j<N;j++){
        int ab=arr[i]+arr[j];
        int l=lower_bound(arr+j,arr+N,ab)-arr-1;
        if(l<=j)continue;
        int r=upper_bound(arr+j+1,arr+N,arr[N-1]-ab)-arr;
        if(l<r)continue;
        //cout<<i<<" "<<j<<" "<<l<<" "<<r<<"\n";
        answer+=(l-r+1);
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}