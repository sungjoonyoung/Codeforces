#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int N, answer = 0;
		cin >> N;
		if (N == 1)cout << 1 << "\n";
		else if (N % 2 == 0)cout << N / 2 + 1<<"\n";
		else {
			answer = N / 2 + 1;
			cout << answer << "\n";
		}

	}
}