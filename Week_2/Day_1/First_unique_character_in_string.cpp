class Solution {
public:
    int firstUniqChar(string s) {
        //Time: O(N) Space: O(1)
        vector<int>lower(26,0);
        for(char i:s){
            lower[i-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(lower[s[i]-'a']==1) return i;
        }
        return -1; 
    }
};
