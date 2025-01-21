#include<iostream>
#include<vector>
using namespace std;
vector<int> v(21);
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
        int answer=0;
        for(int i=0;i<21;i++){
            answer+=v[i]/2;
        }
        cout<<answer<<"\n";
        fill(v.begin(),v.end(),0);
    }
}