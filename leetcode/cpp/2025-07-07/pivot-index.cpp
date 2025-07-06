#include <vector>
#include <iostream>

using namespace std;

class Solution {
  public:
	int pivotIndex(vector<int> &nums) {
		vector<int> psums{0};
		for (int num : nums) psums.push_back(psums.back() + num);

		for (int i = 0; i < psums.size() - 1; i++) {
			// Checking whether the left and the right are equal in area
			if (psums[i] == psums[nums.size()] - psums[i + 1]) { return i; }
		}
		return -1;
	}
};

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    Solution sol;
    cout << sol.pivotIndex(nums) << "\n";

    return 0;
}
