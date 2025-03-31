#include<iostream>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        int N;
        int t,h;
        cin>>N>>h>>t;
        // if(h%2==t%2){
        //     if(h%2){
        //         for(int i=1;i<=N;i++){
        //             if(i%2)cout<<"1 ";
        //             else cout<<"-1 ";
        //         }
        //     }
        //     else {
        //         for(int i=1;i<=N;i++){
        //             if(i%2)cout<<"-1 ";
        //             else cout<<"1 ";
        //         }
        //     }
        // }
        //else{
            if(t%2){
                for(int i=1;i<t;i++){
                    if(i%2)cout<<"1 ";
                    else cout<<"-1 ";
                }
            }
            else {
                for(int i=1;i<t;i++){
                    if(i%2)cout<<"-1 ";
                    else cout<<"1 ";
                }
            }
            for(int i=t;i<=h;i++)cout<<"1 ";
            if(!(h%2)){
                for(int i=h+1;i<=N;i++){
                    if(i%2)cout<<"-1 ";
                    else cout<<"1 ";
                }
            } 
            else{
                for(int i=h+1;i<=N;i++){
                    if(i%2)cout<<"1 ";
                    else cout<<"-1 ";
                }
            }
        // /}
        cout<<"\n";
    }
}