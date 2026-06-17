class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
            while(pq.top().second<=i-k){  //jo index prane ho gye h loop k hr iteration pe i=2 k bd ek element window se discard hoga like pehle zero phir 1 if jo index discard hona ho bo heap k andr ho then element hve to be removed
                pq.pop();
            }
            if(i>=k-1) res.push_back(pq.top().first);
        }
        return res;
    }
};
