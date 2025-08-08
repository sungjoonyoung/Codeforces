#include<iostream>
#define ll long long
using namespace std;
int numtoind[200'001];
int arr[200'000];
void solve(void){
    int N,Q;
    cin>>N>>Q;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        numtoind[arr[i]]=i;
    }
    while(Q--){
        int l,r,k;
        cin>>l>>r>>k;
        l--;r--;
        if(numtoind[k]<l or r<numtoind[k]){cout<<"-1 ";continue;}

        int bigger=0;
        int lesser=0;
        int usedb=0;
        int usedl=0;

        while(l<=r){
            int mid=(r+l)/2;
            // cout<<mid<<" ";
            int tmp=arr[mid];
            if(tmp==k)break;

            if(mid<numtoind[k])l=mid+1;
            else r=mid-1;

            if(mid<numtoind[k] and tmp<k){
                usedl++;
                continue;
            }
            if(mid>numtoind[k] and tmp>k){
                usedb++;
                continue;
            }

            if(tmp<k)bigger++;
            else lesser++;
        }
        // cout<<lesser<<" "<<bigger<<" ";
        int diff=abs(bigger-lesser);
        int remain=max(bigger,lesser)-diff;
        // cout<<lesser+usedl<<" "<<bigger+usedb<<" ";
        if(lesser+usedl<=k-1 and bigger+usedb<=N-k)cout<<2*(remain+diff)<<" ";
        else cout<<"-1 ";
    }
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}