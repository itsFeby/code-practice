#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	int dominantIndex(vector<int> &nums) {
	    int max_index = 0;
	    for (int i = 0; i < nums.size(); ++i){
		    if (nums[i] > nums[max_index]){
				max_index = i;
			}
		}

		for (int i = 0; i < nums.size(); ++i) {
            if (max_index != i && nums[max_index] < nums[i] * 2) {
                return -1;
            }
        }
        return max_index;
    }
};

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    Solution sol;
    cout << sol.dominantIndex(nums) << "\n";

    return 0;
}
