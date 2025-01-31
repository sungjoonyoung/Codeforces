#include<iostream>
using namespace std;
int arr[400001];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int count=0;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            arr[in]++;
        }
        for(int i=1;i<=k/2;i++){
            if(i==k-i)count+=arr[i]/2;
            else count+=min(arr[i],arr[k-i]);
        }
        cout<<count<<"\n";
        fill(arr,arr+200001,0);
    }
}