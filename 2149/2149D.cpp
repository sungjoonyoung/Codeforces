#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vl vector<ll>
#define all(v) (v).begin(), (v).end()
using namespace std;

void solve(void){
    vi av,bv;
    int N;cin>>N;
    for(int i=0;i<N;i++){
        char c;cin>>c;
        if(c=='a')av.push_back(i);
        else bv.push_back(i);
    }
    ll answer=2'000'000'000'000'000'000;
    ll tmp=0;
    int mid=0;
    //al
    if(av.size()%2==0){
        tmp=0;
        mid=av.size()/2-1;
        for(int i=mid-1;i>=0;i--)tmp+=(av[mid]-av[i])-(mid-i);
        for(int i=mid+1;i<av.size();i++)tmp+=(av[i]-av[mid])-(i-mid);
        answer=min(answer,tmp);
    }
    //ar
    tmp=0;
    mid=av.size()/2;
    for(int i=mid-1;i>=0;i--)tmp+=(av[mid]-av[i])-(mid-i);
    for(int i=mid+1;i<av.size();i++)tmp+=(av[i]-av[mid])-(i-mid);
    answer=min(answer,tmp);

    //bl
    if(bv.size()%2==0){
        tmp=0;
        mid=bv.size()/2-1;
        for(int i=mid-1;i>=0;i--)tmp+=(bv[mid]-bv[i])-(mid-i);
        for(int i=mid+1;i<bv.size();i++)tmp+=(bv[i]-bv[mid])-(i-mid);
        answer=min(answer,tmp);
    }
    //br
    tmp=0;
    mid=bv.size()/2;
    for(int i=mid-1;i>=0;i--)tmp+=(bv[mid]-bv[i])-(mid-i);
    for(int i=mid+1;i<bv.size();i++)tmp+=(bv[i]-bv[mid])-(i-mid);
    answer=min(answer,tmp);

    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}