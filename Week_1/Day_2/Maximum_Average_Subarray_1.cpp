class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
		//Time:O(N) Space:O(1)
        int n = nums.size();
        int i = 0;
        int j = k;
        double average = 0;
        double maxx = INT_MIN;
        // first window
        for (int p = 0; p < k; p++) {
            average += nums[p];
        }
        maxx = average;

        while (j < n) {

            average -= nums[i];
            average += nums[j];
            i++;
            j++;
            maxx = max(average, maxx);
        }
        return maxx / k;
    }
};