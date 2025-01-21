#include<iostream>
#include<vector>
using namespace std;
vector<int> v(200001);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        for(int i=0;i<N;i++){
            int in;
            cin>>in;
            v[in]++;
        }
        for(int i=1;i<=N;i++){
            if((N-2)%i!=0)continue;
            if(v[i] && v[(N-2)/i]){
                cout<<i<<" "<<(N-2)/i<<"\n";
                break;
            }
        }
        fill(v.begin(),v.end(),0);
    }
}