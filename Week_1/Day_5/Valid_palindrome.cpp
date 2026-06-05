class Solution {
public:
    bool isPalindrome(string s) {
        //Time: O(N) Space: O(N)
        string  temp="";
        for(char i:s){
            if(isalnum(i)){
                temp+=tolower(i);
            }
        }
        int l=0;
        int r=temp.size()-1;
        while(l<r){
            if(temp[l]!=temp[r]) return false;
            l++; r--;
        }
        return true;
    }
};