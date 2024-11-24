#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--)	{
		int in; cin >> in;
		for (int i = 1; i <= in; i++) {
			if (i == 1)cout << 2 << " ";
			else cout << i * 2 -1 << " ";
		}
		cout << "\n";
	}
}