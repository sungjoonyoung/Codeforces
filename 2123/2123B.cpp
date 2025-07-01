#include<iostream>
using namespace std;
int arr[200000];
void solve(void){
    int N,j,k;
    cin>>N>>j>>k;
    j--;
    int count=0;
    for(int i=0;i<N;i++)cin>>arr[i];
    for(int i=0;i<N;i++)if(i!=j and arr[i]>arr[j])count++;
    if(count and k>=2)cout<<"YES";
    else if(count==0)cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}