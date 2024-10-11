#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int a, b;
		cin >> a >> b;
		if (a % 2 == b % 2)cout << "Tonya\n";
		else cout << "Burenka\n";
	}

}