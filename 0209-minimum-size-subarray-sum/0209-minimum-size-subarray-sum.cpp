class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int min_length = INT_MAX;
        int curr_sum = 0;
        vector<int> result;
        for (int right = 0; right < n; right++) {
            curr_sum = curr_sum + nums[right];
             while (curr_sum >= target) {
                min_length = min(min_length, right - left + 1);
                curr_sum = curr_sum - nums[left];
                left++;
                }
        }
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};