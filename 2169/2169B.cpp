#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minpq(type) priority_queue<type, vector<type>, greater<type>>
#define maxpq(type) priority_queue<type>
using namespace std;
/*
** -> 무한
>< -> 무한
*< -> 무한
>* -> 무한

*뒤에 <와 *만 있으면 무한
*앞에 >와 *만 있으면 무한
*/
void solve(void){
    string str;cin>>str;
    if(str.size()==1){cout<<"1\n";return;}
    //inf

    int tmp;
    //*->
    tmp=0;
    for(int i=0;i<str.size();i++){
        if(!tmp and str[i]=='*'){tmp=1;continue;}
        if(tmp){
            if(str[i]=='<' or str[i]=='*'){cout<<"-1\n";return;}
        }
    }
    //<-*
    tmp=0;
    for(int i=str.size()-1;i>=0;i--){
        if(!tmp and str[i]=='*'){tmp=1;continue;}
        if(tmp){
            if(str[i]=='>' or str[i]=='*'){cout<<"-1\n";return;}
        }
    }
    // ><
    tmp=0;
    for(int i=0;i<str.size();i++){
        if(!tmp and str[i]=='>'){tmp=1;continue;}
        if(tmp){
            if(str[i]=='<'){cout<<"-1\n";return;}
        }
    }
    //
    // cout<<"A\n";

    int answer=-1;
    //<<
    tmp=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='>')break;
        tmp++;
    }
    answer=max(answer,tmp);
    //>>
    tmp=0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='<')break;
        tmp++;
    }
    answer=max(answer,tmp);
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}