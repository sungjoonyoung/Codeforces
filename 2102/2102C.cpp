#include<iostream>
using namespace std;
int arr[1000][1000];
int x, y;
void solve(void) {
    int N;
    cin >> N;
    if(N%2){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)cout<<arr[x-N/2+i][y-N/2+j]<<" ";
            cout<<"\n";
        }
    }
    else{
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)cout<<arr[x-N/2+1+i][y-N/2+1+j]<<" ";
            cout<<"\n";
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    x = y = 500;
    int num = 1;
    for (int i = 1; i < 500; i++) {
        if (i % 2) {
            for (int j = 0; j < i; j++) {
                //arr[x-i+1][y+i]
                arr[x - (i / 2 + 1) + 1 + j][y + i / 2 + 1] = num;
                num++;
            }
            for (int j = 0; j < i + 1; j++) {
                arr[x + i / 2 + 1][y - (i / 2 + 1) + 1 + j] = num;
                num++;
            }
        }
        else {
            for (int j = 0; j < i; j++) {
                //arr[x-i+1][y+i]
                arr[x + i/2 - j][y - i/2] = num;
                num++;
            }
            for (int j = 0; j < i + 1; j++) {
                arr[x - i/2][y + i/2 - j] = num;
                num++;
            }
        }
    }
    // for (int i = 490; i < 510; i++) {
    //     for (int j = 490; j < 510; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    while (T--)solve();
}