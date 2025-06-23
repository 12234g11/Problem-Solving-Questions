#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	string word1, word2,res;
	cin >> word1 >> word2;
	int maxsize = max(word1.length(), word2.length());
	int minsize = min(word1.length(), word2.length());
	for (int i = 0; i < maxsize; i++) {
		if (i < minsize) {
			res = res + word1[i] + word2[i];
		}
		else {
			if (word1.length() == minsize) {
				res += word2[i];
			}
			else {
				res += word1[i];
			}
		}
	}
	cout << res;
}