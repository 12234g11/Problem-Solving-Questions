#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>

using namespace std;
int main() {
	//My code
	vector<int> nums;
	int l;
	cin >> l;
	nums.resize(l);
	for (int i = 0; i < l; i++)
	{
		cin >> nums[i];
	}
	if (nums.size() == 1) {
		cout << nums[0] << endl;
		return 0;
	}
	else if (nums.size() == 0) {
		cout << " " << endl;
		return 0;
	}
	int s = nums[0];
	string res ;
	vector<string> newvec;
	for (int i = 0; i < nums.size()-1; i++)
	{
		int flag = 1;
		if (i == 0 && (nums[i + 1] - nums[i]) != 1) {
			newvec.push_back(to_string(nums[0]));
			s = nums[i + 1];
			flag = 0;
		}
		if (i != 0 && flag != 0 && (nums[i + 1] - nums[i]) != 1 && (nums[i]-nums[i-1]) != 1) {
			newvec.push_back(to_string(nums[i]));
			s = nums[i + 1];
		}
		else if ((nums[i + 1] - nums[i]) == 1 && flag != 0) {
			res = to_string(s) + "->" + to_string(nums[i + 1]);
		}
		else if (flag != 0) {
			newvec.push_back(res);
			s = nums[i + 1];
		}
		if ((i + 1) == nums.size() - 1 && (nums[i + 1] - nums[i]) != 1) {
			newvec.push_back(to_string(nums[i + 1]));
			flag = 0;
		}
		if ((i + 1) == nums.size() - 1 && (nums[i + 1] - nums[i]) == 1 && flag != 0) {
			newvec.push_back(res);
		}
	}
	for (int i = 0; i < newvec.size(); ++i) {
		cout << newvec[i] << " ";
	}
}
//another easy solution :
//class Solution {
//public:
//	vector<string> summaryRanges(vector<int>& nums) {
//		vector<string> newvec;
//
//		if (nums.empty()) return newvec;
//		int start = nums[0];
//
//		for (int i = 1; i < nums.size(); ++i) {
//			// Use long long to avoid overflow when subtracting large values
//			if ((long long)nums[i] - (long long)nums[i - 1] != 1) {
//				if (start == nums[i - 1]) {
//					newvec.push_back(to_string(start));
//				}
//				else {
//					newvec.push_back(to_string(start) + "->" + to_string(nums[i - 1]));
//				}
//				start = nums[i];  // Start a new range
//			}
//		}
//
//		// Handle the last range after the loop
//		if (start == nums.back()) {
//			newvec.push_back(to_string(start));
//		}
//		else {
//			newvec.push_back(to_string(start) + "->" + to_string(nums.back()));
//		}
//
//		return newvec;
//	}
//};
