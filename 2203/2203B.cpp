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

void solve(void) {
    string str;cin>>str;
    int minnum=2000;
    {//첫번째 보존
        string tmpstr=str;
        int tmp=tmpstr[0]-'0';
        int answer=1; //보존 개 수
        tmpstr[0]='9'+1;
        sort(all(tmpstr));
        for(auto c:tmpstr){
            if(tmp+(c-'0')<10){
                tmp+=(c-'0');
                answer++;
                continue;
            }
            break;
        }
        minnum=min(minnum,(int)str.size()-answer);
    }
    {//첫번째 바꾸어 1로.
        int answer=0;
        int tmp=0;
        str[0]='9'+1;
        sort(all(str));
        for(auto c:str){
            if(tmp+(c-'0')<9){
                tmp+=(c-'0');
                answer++;
                continue;
            }
            break;
        }
        minnum=min(minnum,(int)str.size()-answer);
    }
    
    cout<<minnum<<"\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}