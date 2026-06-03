class Solution {
public:
    void moveZeroes(vector<int>& a) {
        //Time: O(N) Space:O(1)
        int i=0;
        int j=0;
        while(i<a.size()  &&  j<a.size())
        {
            if(a[i]!=0){swap(a[i],a[j++]);}
            i++;

        }
        
    }
};