class Solution {
public:
    int maxProfit(vector<int>& prices) {
                //Time: O(N) Space: O(1)
        int minn=INT_MAX;
        int maxx=INT_MIN;
        int n=prices.size();
        for(int i=0;i<n;i++){
            minn=min(prices[i],minn);
            maxx=max(maxx,(prices[i]-minn));
        }
        return maxx;
        
    }
};