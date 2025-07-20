#include<iostream>
using namespace std;
int arr[2][200'000];
int ind_for_not_delete[2][200'001];
void solve(void){
    // fill(arr[0],arr[2],0);
    // fill(ind_for_not_delete[0],ind_for_not_delete[2],0);
    int N;
    cin>>N;

    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            arr[i][j]=0;
        }
    }
    int maxnum_for_init=0;



    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i^(j%2)][j];
            maxnum_for_init=max(maxnum_for_init,arr[i^(j%2)][j]);
            ind_for_not_delete[i^(j%2)][arr[i^(j%2)][j]]=max(ind_for_not_delete[i^(j%2)][arr[i^(j%2)][j]],j+1);
        }
    }

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<N;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    int answer=0;
    //notdelete
    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            int tmp=arr[i][j];
            if(ind_for_not_delete[(i^1)][tmp]==0)continue;
            answer=max(answer,min(ind_for_not_delete[0][tmp],ind_for_not_delete[1][tmp]));
        }
    }
    //delete
    for(int i=0;i<2;i++){
        for(int j=0;j<N;j++){
            int tmp=arr[i][j];
            if(ind_for_not_delete[i][tmp]==j+1 or ind_for_not_delete[i][tmp]==j+2)continue;
            answer=max(answer,j+1);
        }
    }
    cout<<answer<<"\n";


    for(int i=0;i<2;i++){
        for(int j=0;j<=maxnum_for_init;j++){
            ind_for_not_delete[i][j]=0;
        }
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--)solve();
}