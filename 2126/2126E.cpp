#include<iostream>
using namespace std;
int p[100'001];
int s[100'001];
int arr[100'001];
int gcd(int x,int y){
    if(y==0)return x;
    return gcd(y,x%y);
}
void solve(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>p[i];
    for(int i=0;i<N;i++)cin>>s[i];
    int tmp=s[0];
    if(s[0]!=p[N-1]){cout<<"NO\n";return;}


    for(int i=0;i<N-1;i++){
        if(p[i]<p[i+1]){cout<<"NO\n";return;}
        if(gcd(p[i],p[i+1])!=p[i+1]){cout<<"NO\n";return;}
    }
    for(int i=0;i<N-1;i++){
        if(s[i]>s[i+1]){cout<<"NO\n";return;}
        if(gcd(s[i+1],s[i])!=s[i]){cout<<"NO\n";return;}
    }

    for(int i=0;i<N;i++){
        if(p[i]%tmp){cout<<"NO\n";return;}
        p[i]/=tmp;
    }
    for(int i=0;i<N;i++){
        if(s[i]%tmp){cout<<"NO\n";return;}
        s[i]/=tmp;
    }

    for(int i=0;i<N-1;i++){
        int a=p[i];
        int b=s[i+1];
        if(a<b)swap(a,b);
        if(gcd(a,b)!=1){cout<<"NO\n";return;}
    }
    cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}