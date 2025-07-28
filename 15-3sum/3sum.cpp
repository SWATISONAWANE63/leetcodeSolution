class Solution {
public:
    void twoSum(vector<int>& nums, int k, vector<vector<int>>& result, int target) {
        int i = k, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] + nums[j] > target) j--;
            else if (nums[i] + nums[j] < target) i++;
            else {
                result.push_back({ -target, nums[i], nums[j] });
                while (i < j && nums[i] == nums[i + 1]) i++;
                while (i < j && nums[j] == nums[j - 1]) j--;
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n < 3) return {};
        
        vector<vector<int>> result;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Fix for duplicate skipping
            int target = -nums[i];
            twoSum(nums, i + 1, result, target);
        }
        return result;
    }
};
