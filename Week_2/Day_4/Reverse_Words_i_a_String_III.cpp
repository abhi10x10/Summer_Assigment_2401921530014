class Solution {
public:
    string reverseWords(string s) {
        //Time: O(N) and Space: O(1)
        string ans="";
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans.push_back(' ');
                temp="";

            }
            else temp+=s[i];
        }
      
        reverse(temp.begin(),temp.end());
        ans+=temp;
       
        return ans;
    }
};
