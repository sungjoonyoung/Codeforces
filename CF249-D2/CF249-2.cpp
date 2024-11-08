#include<iostream>
#include<string>
using namespace std;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int k;
	cin >> str >> k;
	char maxnum;
	int maxind = 0;
	int before = 0;
	while(k){
		maxnum = '0'-'0';
		for (int i = before; i <= before + k; i++) {
			if (i == str.size())break;
			if (str[i] > maxnum) {
				maxnum = str[i];
				maxind = i;
			}
		}
		if (before == str.size())break;
		if (before == maxind) {
			before++;
			continue;
		}
		//cout << str << " " << before << " " << maxind << " " << maxnum;
		//if (maxind==str.size())break;
		str.erase(str.begin() + maxind);

		str.insert(str.begin() + before, maxnum);
		
		k -= maxind - before;
		before==maxind;
		
	}
	cout << str;
}