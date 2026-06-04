class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //Time: O(m x n) Space: O(mxn)
        if(r*c != mat.size()*mat[0].size()) return mat;
        vector<vector<int>>ans(r,vector<int>(c,-1));
        vector<int>temp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                temp.push_back(mat[i][j]);
            }
        }
        int index=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=temp[index++];
            }
        }
        return ans;
    }
};