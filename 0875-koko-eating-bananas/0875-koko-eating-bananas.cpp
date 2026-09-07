class Solution {
private:
    bool isPossible(vector<int> arr, int h, int k) {
        long long hours = 0;
        for (int i = 0; i < arr.size(); i++) {
            hours += (arr[i] + k - 1) / k;
        }
        return hours <= h;
    }

public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int start = 1, ans = -1;
        int end = *max_element(arr.begin(), arr.end());
        while (start <= end) {
            int mid = start +(end - start) / 2;
            if (isPossible(arr, h, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
           
        }
         return ans;
    }
};