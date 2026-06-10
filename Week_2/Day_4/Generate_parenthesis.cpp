class Solution {
public:
    bool isvalid(string curr){
        stack<char>st;
        for(int i=0;i<curr.size();i++){
            if(curr[i]=='('){
                st.push('(');
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
    void solve(string curr,vector<string>& ans,int n){
        if(curr.size()==2*n){
            if(isvalid(curr)){
                ans.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,ans,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,ans,n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string>ans;
        solve(curr,ans,n);
        return ans;
    }
};
