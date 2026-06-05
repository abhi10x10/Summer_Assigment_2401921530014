class Solution {
public:
    void reverseString(vector<char>& s) {
        //Time: O(N) space:O(1)
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i++],s[j--]);
        }

        
    }
};