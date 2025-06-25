#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
	vector<string> strs;
	int l;
	cin >> l;
	strs.resize(l);
	for (int i = 0; i < l; i++)
	{
		cin >> strs[i];
	}
	char res = strs[0][0];
	int stringIndex = 0;
	if (strs.size() == 1) {
		cout << strs[0];
	}
	else {
		for (int i = 0; i < strs.size(); i++) {
			string temp = strs[i];
			if (temp.size() == 0) {
				cout << "";
				break;
			}
			if (strs[i][stringIndex] == res) {
				res = strs[i][stringIndex];
				if (i == strs.size() - 1 && stringIndex != strs[i].size()-1) {
					stringIndex++;
					i = 0;
					res = strs[0][stringIndex];
					
				}
			}
			else {
				stringIndex--;
				break;
			}
		}
		string finalres = "";
		for (int i = 0; i <= stringIndex; i++) {
			finalres += strs[0][i];
		}
		cout << finalres;
	}
	
}