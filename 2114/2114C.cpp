#include<iostream>
using namespace std;
int arr[200010];
int dp[2][200001];
void solve(void){
    int N;
    cin>>N;
    fill(arr,arr+N+1,0);
    fill(dp[0],dp[0]+N+5,0);
    fill(dp[1],dp[1]+N+5,0);
    int ind=1;
    while(N--){
        int in;
        cin>>in;
        if(arr[ind-1]==in)continue;
        arr[ind]=in;
        //가져 갔을 때
        dp[1][ind]=dp[0][ind-1]+1;
        if(arr[ind-1]+1<arr[ind])dp[1][ind]=max(dp[1][ind],dp[1][ind-1]+1);
        //안가져가
        dp[0][ind]=max(dp[0][ind-1],dp[1][ind-1]);

        ind++;
    }
    cout<<max(max(dp[1][ind],dp[0][ind]),max(dp[1][ind-1],dp[0][ind-1]))<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}