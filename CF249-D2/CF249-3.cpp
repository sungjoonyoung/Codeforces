#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
char out[2001][100001];
int main(void) {
	int N;
	cin >> N;
	int ind1 = 1001, ind2 = 0;
	int maxnum = 1001;
	int minnum = 1001;
	bool key = 1;
	for (int i = 0; i < N; i++) {
		int in; cin >> in;
		while (in--) {
			if (key) {
				out[ind1][ind2] = '/';
				ind1++;
				ind2++;
				maxnum = max(maxnum, ind1);
			}
			else {
				out[ind1][ind2] = '\\';
				ind1--;
				ind2++;
				minnum = min(minnum, ind1);
			}
		}
		if (key) {
			ind1--;
			key = 0;
		}
		else {
			ind1++;
			key = 1;
		}
	}
	for (int k = maxnum - 1; k >= minnum; k--) {
		for (int i = 0; i < ind2; i++) {
			if (out[k][i]) cout << out[k][i];
			else cout << " ";
		}
		cout << "\n";
	}

}