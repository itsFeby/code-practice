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

    vector<int> plusOne(vector<int>& digits) {
	    int n = digits.size();
	    for (int i = n-1; i >= 0; --i){
			if (digits[i] < 9){
			    digits[i]++;
				return digits;
			}
			digits[i] = 0;
		}

		digits.insert(digits.begin(), 1);
		return digits;
	}
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Solution sol;
    int pivot_index = sol.pivotIndex(nums);
    int dominant_index = sol.dominantIndex(nums);
    vector<int> result = sol.plusOne(nums);

    cout << "hasil dari pivot index dari array nums: {1, 2, 3, 4, 5, 6, 7, 8, 9}: " << pivot_index << "\n";
    cout << "hasil dari dominant index dari array nums: {1, 2, 3, 4, 5, 6, 7, 8, 9}: " << dominant_index << "\n";
    cout << "hasil dari plus one dari array nums: {1, 2, 3, 4, 5, 6, 7, 8, 9}: {";

    for (const auto& val : result) {
        cout << val << ", ";
    }
    cout << "}\n";

    return 0;
}
