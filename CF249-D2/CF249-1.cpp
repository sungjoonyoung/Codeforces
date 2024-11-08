#include<iostream>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int answer = 0;
	int tmpm = m;
	for (int i = 0; i < n; i++) {
		int in; cin >> in;
		if (tmpm - in>=0) {
			tmpm -= in;
		}
		else {
			tmpm = m - in;
			answer++;
		}
	}
	cout << answer + 1;
}