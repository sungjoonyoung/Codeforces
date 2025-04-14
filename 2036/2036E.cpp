#include<iostream>
#include<vector>
using namespace std;
int N,M,Q;
//int arr[100001][100001];
vector<vector<int>> arr;
void solve(void){
    int T,a,b;
    char op;
    cin>>T;
    //int answer=N+1;
    int minc,maxc;
    minc=N;
    maxc=1;
    int key=0;
    while(T--){
        cin>>a>>op>>b;
        if(op=='>'){
            int s,e;
            s=0;
            e=N+1;
            while(s+1!=e){
                int mid=(s+e)/2;
                int tmp=arr[mid][a];
                if(tmp<=b)s=mid;
                else e=mid;
            }
            maxc=max(maxc,e);
        }
        else{
            int s,e;
            s=0;
            e=N+1;
            while(s+1!=e){
                int mid=(s+e)/2;
                int tmp=arr[mid][a];
                if(tmp<b)s=mid;
                else e=mid;
            }
            minc=min(minc,s);
        }
    }
    //cout<<minc<<" "<<maxc<<"\n";
    // if(maxc==0)maxc=N;
    // if(minc==N+1)minc=1;
    // if(key)cout<<"-1\n";
    if(minc<maxc)cout<<"-1\n";
    else cout<<maxc<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N>>M>>Q;
    arr.resize(N+1);
    for(int i=0;i<M+1;i++)arr[0].push_back(0);
    for(int i=1;i<N+1;i++){
        arr[i].push_back(0);
        for(int j=1;j<M+1;j++){
            int in;
            cin>>in;
            arr[i].push_back(in);
            //cin>>arr[i][j];
            arr[i][j]=arr[i][j]|arr[i-1][j];
        }
    }
    // for(int i=1;i<N+1;i++){
    //     cout<<"\n";
    //     for(int j=1;j<M+1;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // }
    while(Q--)solve();
}