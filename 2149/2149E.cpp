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
int Mm[200'005];
int Me[200'005];
void solve(void){
    vector<pii> press;

    int n,k,l,r;
    cin>>n>>k>>l>>r;
    vi v;v.resize(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        press.push_back({v[i],i});
    }
    sort(all(press));
    int pind=0;
    for(int i=0;i<n;i++){
        if(i!=0 and press[i-1].first!=press[i].first)pind++;
        v[press[i].second]=pind;
    }
    for(int i=0;i<pind+1;i++)Mm[i]=Me[i]=0;
    
    int mtmp=0;
    int etmp=0;
    int s,m,e;
    s=0;
    m=e=-1;
    ll answer=0;
    while(s+l-1!=n){
        //e가 앞으로
        while(etmp<=k and e!=n-1){
            if(etmp==k and Me[v[e+1]]==0)break;
            e++;
            if(Me[v[e]]==0)etmp++;
            Me[v[e]]++;
        }
        //m이 앞으로
        while(mtmp<k and m<n-1){
            m++;
            if(Mm[v[m]]==0)mtmp++;
            Mm[v[m]]++;
        }
        if(mtmp==k){
            int left=max(s+l-1,m);
            int right=min(s+r-1,e);
            if(left<=right)answer+=(right-left)+1;
        }

        // if(mtmp==k and etmp==k)answer+=e-m+1;

        if(Mm[v[s]]==1)mtmp--;
        if(Me[v[s]]==1)etmp--;
        Mm[v[s]]--;
        Me[v[s]]--;
        s++;
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T=1;
    cin>>T;
    while(T--)solve();
}

// #include<iostream>
// #include<utility>
// #include<vector>
// #include<algorithm>
// #define ll long long
// #define pii pair<int,int>
// #define pll pair<ll,ll>
// #define vi vector<int>
// #define vl vector<ll>
// #define all(v) (v).begin(), (v).end()
// using namespace std;
// int man[200'001];
// void solve(void){
//     int n,k,l,r;
//     cin>>n>>k>>l>>r;
//     vi v;v.resize(n);
//     for(int i=0;i<n;i++)cin>>v[i];
//     int s,e;
//     s=0;
//     e=-1;
//     int tmp=0;
//     ll answer=0;
//     while(s+l-1!=n){
//         while(s+l-1>e){
//             e++;
//             if(man[v[e]]==0)tmp++;
//             man[v[e]]++;
//         }
//         // e가 앞으로
//         while(tmp<k and e!=n-1 and e!=s+r-1){
//             if(tmp==k)break;
//             e++;
//             if(Me[v[e]]==0)tmp++;
//             Me[v[e]]++;
//         }
//         if(tmp==k and l<=e-s+1 and e-s+1<=r){

//         }
//         if(man[v[s]]==1)tmp--;
//         man[v[s]]--;
//         s++;
//     }
//     cout<<answer<<"\n";
// }
// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int T=1;
//     cin>>T;
//     while(T--)solve();
// }