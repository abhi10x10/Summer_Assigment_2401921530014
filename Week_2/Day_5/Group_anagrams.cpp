class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Time: O(n * k log k) Space: O(n*k)
        unordered_map<string,vector<string>>map;
        for(auto x:strs){
            string dummy=x;
            sort(dummy.begin(),dummy.end());
            map[dummy].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto a:map){
            ans.push_back(a.second);
        }
        return ans;
    }
};
