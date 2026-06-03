class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        //Time: O(N) Space: O(1)
        int n=a.size();
        int i=0;
        int j=n-1;
        int index=n-1;
        vector<int>ans(n);
        while(i<=j)
        {
            if(abs(a[i])<abs(a[j])) {ans[index--]=a[j]*a[j]; j-- ;}
            else {ans[index--]=a[i]*a[i]; i++;}
        }
        return ans;
    }
};
