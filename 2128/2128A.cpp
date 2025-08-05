// #include<iostream>
// #include<utility>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #define ll long long
// using namespace std;
// void solve(void){
//     vector<ll> v;
//     ll N,C;
//     cin>>N>>C;
//     v.resize(N);
//     for(int i=0;i<N;i++)cin>>v[i];
//     sort(v.begin(),v.end());
//     int tmp=1;
//     int answer=0;
//     for(auto a:v){
//         if(a>C)break;
//         int t=C/a;
//         if(tmp==(int)log2(t))continue;
//         else{
//             tmp=(int)log2(t);
//             answer++;
//         }
//     }
    
//     cout<<N-answer<<"\n";
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T=1;
//     cin>>T;
//     while(T--)solve();
// }
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
void solve(void){
    vector<ll> v;
    ll N,C;
    cin>>N>>C;
    v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<ll>());
    ll tmp=1;
    ll answer=0;
    for(auto a:v){
        if(a>C)continue;
        if(tmp*a>C)continue;
        // cout<<a<<" ";
        answer++;
        tmp*=2;
    }
    
    cout<<N-answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}