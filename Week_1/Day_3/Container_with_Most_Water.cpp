class Solution {
public:
    int maxArea(vector<int>& height) {
        //Time: O(N) Space:O(1)
        int i=0;
        int j=height.size()-1;
        int area=0;
        int maxx=0;
        while(i<j){
            area=(j-i)*min(height[i],height[j]);
            maxx=max(area,maxx);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return maxx;
    }
};