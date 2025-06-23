#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main()
{
	map<string, int> m;
	m["I"] = 1;
	m["V"] = 5;
	m["X"] = 10;
	m["L"] = 50;
	m["C"] = 100;
	m["D"] = 500;
	m["M"] = 1000;
	m["IV"] = 4;
	m["IX"] = 9;
	m["XL"] = 40;
	m["XC"] = 90;
	m["CD"] = 400;
	m["CM"] = 900;
	string s; cin >> s;
	int res = 0;
	for (int i = 0; i < s.length(); i++) {
		string twosub = string(1, s[i]) + s[i + 1];
		auto it = m.find(twosub);
		if (it != m.end()) {
			res += it->second;
			i++;
		}
		else {
			string onesub = string(1, s[i]);
			auto it = m.find(onesub);
			if (it != m.end()) {
				res += it->second;
			}
		}
	}
	cout << res;
}