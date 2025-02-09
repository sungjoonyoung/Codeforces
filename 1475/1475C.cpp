#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N,M,K;
        cin>>N>>M>>K;
        long long count=0;
        vector<long long> m(N+1,0);
        vector<long long> w(M+1,0);
        vector<pair<int,int>> vp;
        
        for(int i=0;i<K;i++){
            int in;
            cin>>in;
            m[in]++;
            vp.push_back({in,0});
        }
        for(int i=0;i<K;i++){
            int in;
            cin>>in;
            w[in]++;
            vp[i].second=in;
        }
        for(int i=0;i<vp.size();i++){
            count+=K-1;
            count-=m[vp[i].first]-1;
            count-=w[vp[i].second]-1;
            
        }
        cout<<count/2<<"\n";
    }
}