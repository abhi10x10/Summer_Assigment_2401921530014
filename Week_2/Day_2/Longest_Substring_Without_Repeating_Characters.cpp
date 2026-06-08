class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Time: O(N) Space: O(N)
        unordered_map<char,int>mp;
        int l=0;
        int ans=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            
            if(mp.size()<r-l+1){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]);
                l++;
            }
            if(mp.size()==r-l+1) ans=max(ans,r-l+1);
        }
        return ans;
    }
};
