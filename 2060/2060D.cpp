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
        v.resize(N);
        for(int i=0;i<N;i++)cin>>v[i];
        for(int i=1;i<N;i++){
            int tmp=min(v[i],v[i-1]);
            v[i]-=tmp;
            v[i-1]-=tmp;
        }
        [&](){for(int i=0;i<N-1;i++){
            if(v[i]){
                cout<<"NO\n";
                return;
            }
        }
        cout<<"YES\n";
        }();

    }
}