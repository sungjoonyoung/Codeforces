#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        while(N--){
            int in;
            cin>>in;
            v.push_back(in);
        }
        int minnum=2001;
        for(int i=0;i<v.size();i++){
            int count=0;
            for(int j=i;j<v.size();j++){
                if(v[j]>v[i])count++;
            }
            count+=i;
            minnum=min(minnum,count);
        }
        cout<<minnum<<"\n";
        v.clear();
    }
}