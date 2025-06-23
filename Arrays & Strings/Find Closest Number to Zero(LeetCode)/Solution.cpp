#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        nums.push_back(val); 
    }
    int target = 0;
    auto it = find(nums.begin(), nums.end(), target);
    if (it != nums.end()) {
        return 0;
    }
    else {
        nums.push_back(0);
        sort(nums.begin(), nums.end());
        auto it = find(nums.begin(), nums.end(), target);
        if (nums[0] == 0) {
            return nums[1];
        }
        else if(nums[nums.size()-1] == 0) {
            return nums[nums.size() - 2];
        }
        else {
            int index = distance(nums.begin(), it);
            int bi = index - 1;
            int ai = index + 1;
            if (abs(nums[bi]) == nums[ai]) {
                return nums[ai];
            }
            else if(abs(nums[bi]) > nums[ai]) {
                return nums[ai];
            }
            else {
                return nums[bi];
            }

        }
    }
}
//My solution is o(nlogn)


//this better solution with O(n)
//class Solution {
//public:
//    int findClosestNumber(vector<int>& nums) {
//        int res = INT_MAX;
//        for (int i = 0, n = nums.size(); i < n; ++i) {
//            int num = nums[i];
//            if (abs(num) < abs(res) || num == abs(res)) res = num;
//        }
//        return res;
//    }
//};