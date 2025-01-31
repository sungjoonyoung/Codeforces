#include<iostream>
#include<vector>
using namespace std;
int arr[4000000];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)for(int j=0;j<m;j++){
            int in;
            cin>>in;
            arr[in]=i;
        }
        
        [&](){
        for(int i=0;i<n;i++){
            int before=arr[i];
            for(int j=0;j<m;j++){
                if(before!=arr[j*n+i]){
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        for(int i=0;i<n;i++)cout<<arr[i]+1<<" ";
        cout<<"\n";
        }();
    }
}