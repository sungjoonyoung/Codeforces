#include<iostream>
#include<string>
using namespace std;
void solve(void){
    string str;
    bool arr[200005];
    fill(arr,arr+200005,0);
    cin>>str;
    int q;
    cin>>q;
    int key=0;
    for(int i=0;i<str.size()-3;i++){
        if(str[i]=='1' and str[i+1]=='1' and str[i+2]=='0' and str[i+3]=='0'){
            arr[i]=1;i+=3;key++;
        }
    }
    while(q--){
        int i,v;
        cin>>i>>v;
        i--;
        str[i]=(char)(v+'0');
        //key-=arr[i]+arr[i-1]+arr[i-2]+arr[i-3];
        for(int j=0;j<4;j++){
            if(i-j<0)break;
            key-=arr[i-j];
            arr[i-j]=0;
        }
        for(int j=0;j<4;j++){
            if(i<0)break;
            if(str[i]=='1' and str[i+1]=='1' and str[i+2]=='0' and str[i+3]=='0'){
                arr[i]=1;key++;
            }
            i--;
        }
        if(key)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}