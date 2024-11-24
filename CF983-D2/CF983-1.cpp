#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int b;
		cin >> b;
		bool s;
		int answer=0;
		for (int j = 0; j < 2*b; j++) {
			cin >> s;
			answer += s;
		}
		if (answer <= b) {
			cout << answer % 2 << " " << answer;
		}
		else {
			cout << (b - (answer - b))%2 << " " << b - (answer - b);
		}
		cout << "\n";
	}
}