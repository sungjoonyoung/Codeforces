#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#define ll long long
using namespace std;

void solve(void){
    vector<pair<ll,ll>> v;
    int N;
    cin>>N;

    ll minx,miny,maxx,maxy;
    minx=miny=2'000'000'000'000'000'000;
    maxx=maxy=-1;
    for(int i=0;i<N;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    if(N==1){cout<<"1\n";return;}
    if(N==2){cout<<"2\n";return;}





    ll answer=(maxx-minx+1)*(maxy-miny+1);
    // cout<<answer<<"A\n";
    sort(v.begin(),v.end());

    //왼쪽에서 오른쪽
    minx=miny=2'000'000'000'000'000'000;
    maxx=maxy=-1;   
    for(int i=0;i<v.size()-1;i++){
        ll x=v[i].first;
        ll y=v[i].second;
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    ll tmp=(maxx-minx+1)*(maxy-miny+1);
    if(tmp!=v.size()-1)answer=min(answer,tmp);
    else answer=min(answer,tmp+min((maxx-minx+1),(maxy-miny+1)));

    //오른쪽에서 왼쪽
    minx=miny=2'000'000'000'000'000'000;
    maxx=maxy=-1;   
    for(int i=1;i<v.size();i++){
        ll x=v[i].first;
        ll y=v[i].second;
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    tmp=(maxx-minx+1)*(maxy-miny+1);
    if(tmp!=v.size()-1)answer=min(answer,tmp);
    else answer=min(answer,tmp+min((maxx-minx+1),(maxy-miny+1)));

    //y
    sort(v.begin(),v.end(),[&](pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    });
    // for(int i=0;i<N;i++)cout<<v[i].second<<" ";
    //아래 위
    minx=miny=2'000'000'000'000'000'000;
    maxx=maxy=-1;   
    for(int i=0;i<v.size()-1;i++){
        ll x=v[i].first;
        ll y=v[i].second;
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    tmp=(maxx-minx+1)*(maxy-miny+1);
    if(tmp!=v.size()-1)answer=min(answer,tmp);
    else answer=min(answer,tmp+min((maxx-minx+1),(maxy-miny+1)));

    //위 아래
    minx=miny=2'000'000'000'000'000'000;
    maxx=maxy=-1;   
    for(int i=1;i<v.size();i++){
        ll x=v[i].first;
        ll y=v[i].second;
        minx=min(minx,x);
        miny=min(miny,y);
        maxx=max(maxx,x);
        maxy=max(maxy,y);
    }
    tmp=(maxx-minx+1)*(maxy-miny+1);
    if(tmp!=v.size()-1)answer=min(answer,tmp);
    else answer=min(answer,tmp+min((maxx-minx+1),(maxy-miny+1)));

    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}