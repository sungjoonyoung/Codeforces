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
짝수 일 때
초반 두 개는 달라야 하고
세 개 이상 연속 X

홀 수 일때
A부터 시작
세 개 이상 연속 X
*/
void solve(void) {
    int N;cin>>N;
    string str;cin>>str;
    
    int A,B;A=B=0;
    for(auto c:str){
        if(c=='a')A++;
        if(c=='b')B++;
    }
    if(B>str.size()/2){cout<<"NO\n";return;}
    if(A>str.size()-str.size()/2){cout<<"NO\n";return;}
    
    int bul_A=str.size()-str.size()/2-A;
    int bul_B=str.size()/2-B;

    // cout<<bul_A<<" "<<bul_B<<" ";
    if(str.size()%2==0){
        for(int i=0;i<str.size();i+=2){
            if(str[i]=='a' and str[i+1]=='b')continue;
            if(str[i]=='b' and str[i+1]=='a')continue;
            // ?
            if(str[i]=='?' and str[i+1]=='?'){ // ? ?
                if(bul_A==0 or bul_B==0){cout<<"NO\n";return;}
                bul_A--;bul_B--;
            }
            else if(str[i]=='?'){ // ? !
                if(str[i+1]=='a'){
                    if(bul_B==0){cout<<"NO\n";return;}
                    bul_B--;
                }
                else{
                    if(bul_A==0){cout<<"NO\n";return;}
                    bul_A--;
                }
            }
            else{ // ! ?
                if(str[i]=='a'){
                    if(bul_B==0){cout<<"NO\n";return;}
                    bul_B--;
                }
                else{
                    if(bul_A==0){cout<<"NO\n";return;}
                    bul_A--;
                }
            }
        }
    }
    else{
        if(str[0]=='b'){cout<<"NO\n";return;}
        if(str[0]=='?'){
            if(bul_A==0){cout<<"NO\n";return;}
            bul_A--;
        }
        for(int i=1;i<str.size();i+=2){
            if(str[i]=='a' and str[i+1]=='b')continue;
            if(str[i]=='b' and str[i+1]=='a')continue;
            // ?
            if(str[i]=='?' and str[i+1]=='?'){ // ? ?
                if(bul_A==0 or bul_B==0){cout<<"NO\n";return;}
                bul_A--;bul_B--;
            }
            else if(str[i]=='?'){ // ? !
                if(str[i+1]=='a'){
                    if(bul_B==0){cout<<"NO\n";return;}
                    bul_B--;
                }
                else{
                    if(bul_A==0){cout<<"NO\n";return;}
                    bul_A--;
                }
            }
            else{ // ! ?
                if(str[i]=='a'){
                    if(bul_B==0){cout<<"NO\n";return;}
                    bul_B--;
                }
                else{
                    if(bul_A==0){cout<<"NO\n";return;}
                    bul_A--;
                }
            }
        }
    }
    cout<<"YES\n";
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}