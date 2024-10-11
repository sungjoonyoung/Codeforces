#include<iostream>
#include<vector>
using namespace std;
int arr[100001];
bool find(void);
int two = 0, four = 0, six = 0, eight=0;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int in;
		cin >> in;
		arr[in]++;
		if (arr[in] == 2)two++;
		if (arr[in] == 4)four++;
		if (arr[in] == 6)six++;
		if (arr[in] == 8)eight++;
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		char c;
		cin >> c;
		int in;
		if (c == '-') {
			cin >> in;
			if (arr[in] == 2)two--;
			if (arr[in] == 4)four--;
			if (arr[in] == 6)six--;
			if (arr[in] == 8)eight--;
			arr[in]--;
			if (find())cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			cin >> in;
			arr[in]++;
			if (arr[in] == 2)two++;
			if (arr[in] == 4)four++;
			if (arr[in] == 6)six++;
			if (arr[in] == 8)eight++;
			if(find())cout<<"YES\n";
			else cout << "NO\n";
		}
	}
}

bool find(void) {
	/*if (eight > 0)cout << "YES\n";
	else if (six >= 2)cout << "YES\n";
	else if (six == 1) {
		if (two >= 2)cout << "Yes\n";
		else cout << "NO\n";
	}
	else {
		if (four >= 2)cout << "Yes\n";
		else if (four == 1 and two > 2)cout<<"Yes\n";
		else cout<<"NO\n";
	}
	return;*/
	if (eight > 0)return 1;
	else if (six >= 2)return 1;
	else if (six == 1) {
		if (two >= 2)return 1;
		else return 0;
	}
	else {
		if (four >= 2)return 1;
		else if (four == 1 and two > 2)return 1;
		else return 0;
	}
	return 0;
}