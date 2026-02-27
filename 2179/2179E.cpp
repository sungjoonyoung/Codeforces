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
이기는 데에는 P의 평균을 약간 넘도록 최대한 넣고,

체크

그리고 P를 꽉채우게 나머지를 과연 넣을 수 있느냐? 

근데 그럼 다 채우고 남은 애들은? 짝수면 동등한 데에 계속 넣거나

홀수일 때는 따로 생각해 보자고
*/
void solve(void){
    ll N,X,Y;cin>>N>>X>>Y;
    string str;cin>>str;
    vl v;v.resize(N);
    for(int i=0;i<N;i++)cin>>v[i];
    ll rest=0;
    ll bullet=0;
    for(int i=0;i<N;i++){
        ll wall=v[i]/2+1;//적어도 이건 넘어야 해
        if(str[i]=='0')//A가 이겨야 하니까
            X-=wall;
        else
            Y-=wall;
        rest+=v[i]-wall;
        if(v[i]%2==0)bullet++;
    }
    if(X<0 or Y<0){cout<<"NO\n";return;}
    if(X+Y<rest){cout<<"NO\n";return;}
    // 자 여기부터는 일단 다 채울 수는 있다는 것이여.
    if(X==Y){cout<<"YES\n";return;}
    else if(X>Y){
        if(X-Y-bullet<=rest){cout<<"YES\n";return;} //일단 더 많ㅇ느 애들을 남는 데에 넣고, 딱 맞아 떨어지고, 하나 남더라도 0과 1 둘 중 하나는 있을 거
        for(int i=0;i<N;i++){
            if(str[i]=='0'){cout<<"YES\n";return;}
        }
    }
    else if(X<Y){
        if(Y-X-bullet<=rest){cout<<"YES\n";return;} //일단 더 많ㅇ느 애들을 남는 데에 넣고, 딱 맞아 떨어지고, 하나 남더라도 0과 1 둘 중 하나는 있을 거
        for(int i=0;i<N;i++){
            if(str[i]=='1'){cout<<"YES\n";return;}
        }
    }
    cout<<"NO\n";

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}