#include<iostream>
#include<string>
using namespace std;
char arr[1000][1000];
void solve(void){
    int N,M;
    cin>>N>>M;
    int answer=0;
    for(int i=0;i<N;i++)for(int j=0;j<M;j++)cin>>arr[i][j];
    for(int s=0;s<(min(N,M))/2;s++){
        string str;
        for(int i=s;i<M-s-1;i++)str.push_back(arr[s][i]);
        for(int i=s;i<N-s-1;i++)str.push_back(arr[i][M-s-1]);
        for(int i=M-s-1;i>s;i--)str.push_back(arr[N-s-1][i]);
        for(int i=N-s-1;i>s;i--)str.push_back(arr[i][s]);
        //cout<<str<<"\n";
        for(int i=0;i<str.size()-3;i++){
            if(str[i]=='1' and str[i+1]=='5' and str[i+2]=='4' and str[i+3]=='3'){
                answer++;
                i+=3;
            }
        }
        if(str[str.size()-3]=='1' and str[str.size()-2]=='5' and str[str.size()-1]=='4' and str[0]=='3')answer++;
        if(str[str.size()-2]=='1' and str[str.size()-1]=='5' and str[0]=='4' and str[1]=='3')answer++;
        if(str[str.size()-1]=='1' and str[0]=='5' and str[1]=='4' and str[2]=='3')answer++;
    }
    cout<<answer<<"\n";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)solve();
}