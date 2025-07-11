#include<iostream>
#include<vector>
using namespace std;
int row[100'005];
int col[100'005];
vector<int> arr[100'005];
void solve(void){
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)row[i]=0;
    for(int i=0;i<M;i++)col[i]=0;
    // fill(row,row+N,0);
    // fill(col,col+M,0);
    for(int i=0;i<N;i++)arr[i].resize(M);
    int maxnum=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int in;
            cin>>in;
            maxnum=max(maxnum,in);
            arr[i][j]=in;
        }
    }

    int count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            row[i]+=(maxnum==arr[i][j]);
            col[j]+=(maxnum==arr[i][j]);
            count+=(maxnum==arr[i][j]);
        }
    }
    
    int colind=-1,rowind=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if((row[i]+col[j]-(arr[i][j]==maxnum))==count){
                // possiblecount++;
                rowind=i;
                colind=j;
            }
        }
    }
    if(colind==-1){
        cout<<maxnum<<"\n";
        for(int i=0;i<N;i++)arr[i].clear();
        return;
    }

    for(int i=0;i<N;i++)arr[i][colind]--;
    for(int i=0;i<M;i++)arr[rowind][i]--;
    arr[rowind][colind]++;
    maxnum=-1;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            maxnum=max(maxnum,arr[i][j]);
        }
    }
    cout<<maxnum<<"\n";
    for(int i=0;i<N;i++)arr[i].clear();
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}