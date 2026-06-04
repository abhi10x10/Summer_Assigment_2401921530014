class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        //Time: O(N) Space: O(1)
        int r=0;
        int c=0;
        int n=mat[0].size();
        int m=mat.size();
        int r1=0;
        int c1=n-1;
        int ans=0;
        while(r<m && c<n && r>=0 && c>=0){
            if(r==r1 && c==c1) ans-=mat[r][c];
            ans+=mat[r][c];
            ans+=mat[r1][c1];
            r+=1;
            c+=1;
            r1+=1;
            c1-=1;
            

        }
        return ans;
    }
};