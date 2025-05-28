#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(void){
    string str;
    cin>>str;
    if(str.size()==2){
        cout<<"NO\n";
        return;
    }
    vector<char> v;
    int count=0;
    for(auto c:str){
        if(c=='('){
            v.push_back('(');
        }
        else{
            if(v.back()=='(')v.pop_back();
            else v.push_back(')');
        }
        count+=v.empty();
    }
    if(count>1)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}