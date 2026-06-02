class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		//Time: O(N) Space: O(1)
        int maxsum=INT_MIN,currsum=0;
        for(int i : nums){
            currsum+=i;
            maxsum=max(maxsum,currsum);
            if(currsum<0) currsum=0;
        }
        return maxsum;
        
    }
};