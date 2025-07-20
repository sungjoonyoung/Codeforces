#include<iostream>
#include<vector>
using namespace std;
int arr[200'001];
int count_arr[200'001];
void solve(void){
    int N;
    cin>>N;
    fill(arr,arr+N,0);
    
    for(int i=0;i<N;i++)cin>>arr[i];
    int count=1; // 지금 채워야 할 거
    int tmp=0; // 나중에 채워야 할 거
    int answer=1;

    int maxnum_for_back=0;
    for(int i=0;i<N;i++){
        int num=arr[i];
        maxnum_for_back=max(maxnum_for_back,num);
        if(count_arr[num]!=answer){ //파티션에 없는 수가 나오면
            if(count_arr[num]==answer-1)count--;
            tmp++;
            count_arr[num]=answer;
        }
        if(count==0){
            count=tmp;
            answer++;
            tmp=0;
        }
    }
    cout<<answer-1<<"\n";
    fill(count_arr,count_arr+maxnum_for_back+1,0);
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}