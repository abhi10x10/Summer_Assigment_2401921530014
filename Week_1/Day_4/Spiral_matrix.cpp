class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //Time: O(mxn) Space O(mxn)
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while (top <= bottom && left <= right) {

            // left to right
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                // right to left
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            if (left <= right) {
                // bottom to top
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};