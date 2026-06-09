class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //Time: O(N) Space: O(1)
        for(int len = 1; len < s.size(); len++) {

            if(s[0] != s[len]) continue;

            string temp = s.substr(0, len);

            if(s.size() % temp.size() != 0) continue;

            int n = s.size() / temp.size();

            string a = "";

            while(n--) {
                a += temp;
            }

            if(a == s) return true;
        }

        return false;
    }
};
