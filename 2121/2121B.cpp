#include<iostream>
using namespace std;
int count['z'-'a'+1];
void solve(void){
    fill(count,count+'z'-'a'+1,0);
    int N;cin>>N;
    string str;
    cin>>str;
    for(auto a:str){
        count[a-'a']++;
    }
    count[str.front()-'a']--;
    count[str.back()-'a']--;
    for(int i=0;i<'z'-'a'+1;i++){
        if(count[i]>=2){
            cout<<"Yes\n";
            return;
        }
    }
    if(count[str.front()-'a'] or count[str.back()-'a']){
        cout<<"Yes\n";
        return;
    }

    cout<<"No\n";
    
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}