class Solution {
public:
    int compress(vector<char>& a) {
        //Time: O(N)  Space: O(1)
        int l=a.size();
        int index=0;
        int i=0;
        while(i<l){
            char curr=a[i];
            int count=0;
            while(i<l && curr==a[i]){
                count++;
                i++;
            }
            a[index++]=curr;
            if(count>1){
                string num=to_string(count);
                for(char n:num){
                    a[index++]=n;
                }
            }

        }
        return index;
    }
};
