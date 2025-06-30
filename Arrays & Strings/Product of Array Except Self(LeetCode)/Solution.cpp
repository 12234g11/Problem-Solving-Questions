#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> nums = { -1,1,0,-3,3 };
	int n = nums.size();
	vector<int> answer(n);
	answer[0] = 1;
	for (int i = 1; i < n; i++)
	{
		answer[i] = nums[i - 1] * answer[i - 1];
	}
	int r = 1;
	for (int i = n - 1; i >= 0; i--)
	{
		answer[i] *= r;
		r *= nums[i];
	}

	for (int x : answer)
		cout << x << " ";  
}