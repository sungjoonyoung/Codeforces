#include<iostream>
#include<vector>
using namespace std;
int arr[200'001];
void solve(void){
    int N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>arr[i];
    int _minu=arr[1]-arr[0];//a-b
    int _plus=0;//a+b
    if(N%2){
        int tmp=N/2+1;
        int tmpplus=arr[N/2];
        if(tmpplus%tmp){cout<<"NO\n";return;}
        _plus=tmpplus/tmp;
    }
    else{
        int tmp=N+1;
        int tmpplus=arr[0]+arr[N-1];
        if(tmpplus%tmp){cout<<"NO\n";return;}
        _plus=tmpplus/tmp;
    }
    if((_minu+_plus)<0 or(_plus-_minu)<0){cout<<"NO\n";return;}
    if((_minu+_plus)%2){cout<<"NO\n";return;}
    if((_plus-_minu)%2){cout<<"NO\n";return;}

    if(N!=2){ //unique?
        if(N%2)for(int i=0;i<N/2;i++){
            if(arr[i]+arr[N-i-1]!=arr[N/2]*2){cout<<"NO\n";return;}
        }
        else{
            int check=arr[0]+arr[N-1];
            for(int i=0;i<N/2;i++){
                if(arr[i]+arr[N-i-1]!=check){cout<<"NO\n";return;}
            }
        }

        int check=arr[1]-arr[0];
        for(int i=0;i<N-1;i++){
            if(check!=arr[i+1]-arr[i]){cout<<"NO\n";return;}
        }
    }
    



    cout<<"YES\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}