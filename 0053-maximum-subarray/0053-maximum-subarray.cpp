class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int res = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            // Either extend the previous subarray or start a new one
            currSum = max(nums[i], currSum + nums[i]);
            res = max(res, currSum);
        }
        
        return res;
    }
};
