class Solution {
public:
    bool palindrome(string &s,int i,int j){
        //Time: O(n^3) Space: O(1)
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=INT_MIN;
        int sp=0;
        
        for(int left=0;left<n;left++){
            for(int right=left;right<n;right++){
            if(palindrome(s,left,right)){
                if(maxlen<right-left+1){
                    maxlen=right-left+1;
                    sp=left;
                }
            }
            }  
        }
        return s.substr(sp,maxlen);
    }
};
