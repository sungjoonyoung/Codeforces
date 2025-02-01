#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
queue<long long> q;
map<long long,vector<long long>> m;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        for(int i=1;i<=N;i++){
            long long in;
            cin>>in;
            if(i!=1)m[in-1+i].push_back(in-1+i+i-1);
            if(in-1+i==N and q.empty())q.push(N);
        }
        long long maxnum=N;
        while(!q.empty()){
            long long curx=q.front();
            q.pop();
            for(int i=0;i<m[curx].size();i++){
                long long tmpx=m[curx][i];
                //if(m[tmpx].empty())continue;
                q.push(tmpx);
                maxnum=max(tmpx,maxnum);
            }
            m[curx].clear();
        }
        cout<<maxnum<<"\n";
        m.clear();
    }
}