#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
	vector<int> prices;
	int l ;
	cin >> l;
	prices.resize(l);
	for (int i = 0; i < l; i++)
	{
		cin >> prices[i];
	}
	int res = 0 , t = 0;
	int themin = prices[0];
	for (int i = 0; i < l-1; i++)
	{
		t = prices[i + 1] - themin;
		themin = min(themin, prices[i + 1]);
		if (t > res) res = t;
	}
	if (res <= 0) {
		cout << "-1";
	}
	else {
		cout << res;
	}
}