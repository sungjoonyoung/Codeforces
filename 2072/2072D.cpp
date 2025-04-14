#include<iostream>
#include<vector>
using namespace std;
void solve(void){
    int answerl,answerr,answerv;
    answerr=answerl=0;
    answerv=0;
    vector<int> v;
    int N;
    cin>>N;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    for(int i=0;i<N;i++){
        int tmpr=i;
        int maxnum=0;
        int tmp=0;
        for(int j=i+1;j<N;j++){
            if(v[i]>v[j])tmp++;
            else if(v[i]<v[j]) tmp--;
            if(maxnum<tmp){
                maxnum=tmp;
                tmpr=j;
            }
        }
        if(maxnum>answerv){
            answerl=i;
            answerr=tmpr;
            answerv=maxnum;
        }
    }
    cout<<answerl+1<<" "<<answerr+1<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}