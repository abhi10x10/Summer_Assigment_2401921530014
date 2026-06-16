class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        vector<int>r(n,0);
        vector<int>l(n,0);
        stack<int>s;
        // for right
        for(int z=n-1;z>=0;z--){
            while(s.size()>0 && h[s.top()]>=h[z]){
                s.pop();

            }
            if(s.empty()){
                r[z]=n;
            }
            else{
                r[z]=s.top();
            }
            s.push(z);
        }
        //for left
        while(!s.empty()){
            s.pop();
        }
        for(int y=0;y<n;y++){
            while(s.size()>0 && h[y]<=h[s.top()]){
                s.pop();
            }
            if(s.empty()){
                l[y]=-1;
            }
            else{
                l[y]=s.top();
            }
            s.push(y);
        }
        
        int maxx=0;
        for(int i=0;i<n;i++){
            int area=h[i]*(r[i]-l[i]-1);
            maxx=max(maxx,area);

        }
        return maxx;
        
    }
};
