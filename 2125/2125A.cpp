#include<iostream>
using namespace std;
void solve(void){
    string str;
    cin>>str;
    string answer;
    int cnt=0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='T')cnt++;
        else if(str[i]=='N' or str[i]=='F')answer.push_back(str[i]);
        else{
            for(int j=0;j<cnt;j++)answer.push_back('T');
            cnt=0;
            
            answer.push_back(str[i]);
        }
    }
    for(int j=0;j<cnt;j++)answer.push_back('T');
    cnt=0;
    for(int i=answer.size()-1;i>=0;i--)cout<<answer[i];
    cout<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}