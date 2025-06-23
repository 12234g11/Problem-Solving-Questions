#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;
	int c = 0;
	for (int i = 0; i < t.length(); i++)
	{
		if (t[i] == s[c]) {
			c++;
		}
	}
	if (c == s.length()) {
		cout << "true";
	}
	else {
		cout << "false";
	}
}