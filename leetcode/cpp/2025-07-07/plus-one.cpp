#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
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
    vector<int> nums = {9, 9, 9};

    Solution sol;
    vector<int> result = sol.plusOne(nums);

    for (const auto& val : result) {
        cout << val << "\n";
    }

    return 0;
}
