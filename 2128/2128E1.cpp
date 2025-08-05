#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int N,K;
int arr[300'001];
pair<int,int> find_subarray(int x){
    vector<int> suffix_v(N+1,0);
    for(int i=1;i<=N;i++)suffix_v[i]=suffix_v[i-1] +((arr[i]>=x)?1:-1);
    int ind1=0,ind2=1;
    for(ind2=K;ind2<=N;ind2++){
        if(suffix_v[ind2]-suffix_v[ind1]>=0)return make_pair(ind1+1,ind2);
        
        if(suffix_v[ind2-K+1]<suffix_v[ind1])ind1=ind2-K+1;
    }
    return make_pair(-1,-1);
}
void solve(void){
    cin>>N>>K;
    for(int i=1;i<=N;i++)cin>>arr[i];
    int answer=0;
    //cout<<(1<<19)<<"\n";
    for(int i=(1<<19);i>0;i/=2){
        if(find_subarray(answer+i)==make_pair(-1,-1))continue;
        // cout<< find_subarray(answer+i).second<<" ";
        answer+=i;
    }
    pair<int,int> index=find_subarray(answer);
    cout<<answer<<" "<<index.first<<" "<<index.second<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}