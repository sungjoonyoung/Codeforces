#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int mx,my,Mx,My;
        mx=my=1001;
        Mx=My=0;
        int M;
        cin>>M;
        while(M--){
            int x,y;
            cin>>x>>y;
            mx=min(mx,x);
            my=min(my,y);
            Mx=max(Mx,x);
            My=max(My,y);
        }
        cout<<(Mx+My)*2<<"\n";
    }
}