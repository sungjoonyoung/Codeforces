#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int arr1[100'005];
int arr2[100'005];
void solve(void){
    vector<pair<int,int>>v;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr1[i];
    for(int i=0;i<N;i++)cin>>arr2[i];
    for(int i=0;i<N;i++)for(int j=0;j<N-1;j++){
        if(arr1[j]>arr1[j+1]){
            swap(arr1[j],arr1[j+1]);
            v.push_back({1,j});
        }
    }
    for(int i=0;i<N;i++)for(int j=0;j<N-1;j++){
        if(arr2[j]>arr2[j+1]){
            swap(arr2[j],arr2[j+1]);
            v.push_back({2,j});
        }
    }
    for(int i=0;i<N;i++){
        if(arr1[i]>arr2[i])v.push_back({3,i});
    }
    // for(int i=0;i<N;i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<"\n";
    // for(int i=0;i<N;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<"\n";


    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second+1<<"\n";

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}