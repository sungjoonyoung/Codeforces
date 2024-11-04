#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k;
		if (n != 1 and (k == n or k == 1))cout << "-1\n";
		else if (n == 1)cout << "1\n1\n";
		else if (k % 2 == 0) {//È¦È¦ ÄÉÀÌ½º
			cout << "3\n" << "1 " << k<<" " << k + 1<<"\n";
		}
		else {//Â¦Â¦ÄÉÀÌ½º
			cout << "5\n" << "1 " << "2 " << k << " " << k + 1 << " " << n << "\n";
		}
	}
}