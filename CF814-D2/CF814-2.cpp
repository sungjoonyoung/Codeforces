#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		int n, k;
		cin >> n >> k;
		if (n % 4 == 0) {
			if (k % 2 == 1) {
				cout << "YES\n";
				for (int i = 1; i < n; i+=2) {
					cout << i << " " << i + 1<<"\n";
				}
			}
			else if (k % 2 == 0) {
				if ((k / 2) % 2 == 1) {
					cout << "YES\n";
					for (int i = 3; i < n; i += 4) {
						cout << i << " " << i + 1 << "\n";
					}
					for (int i = 1; i < n; i += 4) {
						cout << i+1 << " " << i << "\n";
					}
				}
				else cout << "NO\n";
			}
			else cout << "NO\n";
		}
		else if (n % 4 == 2) {
			if (k % 2 == 1) {
				cout << "YES\n";
				for (int i = 1; i < n; i += 2) {
					cout << i << " " << i + 1 << "\n";
				}
			}
			else if (k % 2 == 0) {
				if ((k / 2) % 2 == 1) {
					cout << "YES\n";
					for (int i = 3; i < n; i += 4) {
						cout << i << " " << i + 1 << "\n";
					}
					for (int i = 1; i < n; i += 4) {
						cout << i + 1 << " " << i << "\n";
					}
				}
				else cout << "NO\n";
			}
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}