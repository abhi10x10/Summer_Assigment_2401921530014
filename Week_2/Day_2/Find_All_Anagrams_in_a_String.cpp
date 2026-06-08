class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //Time: O(N) Space: O(1)
          int len_a=p.length();
        int len_b=s.length();
        vector<int>ans;
        if(len_a > len_b) return {};
       vector<int>freq(26,0);
        for(int i=0;i<len_a;i++){
            freq[p[i]-'a']++;
        }
        vector<int>freq2(26,0);
        int i=0;
        
        while(i<len_a) {freq2[s[i]-'a']++; i++;}
        if(freq==freq2) ans.push_back(0);
        for( i=len_a;i<len_b;i++){
            freq2[s[i]-'a']++;
            freq2[s[i-len_a]-'a']--;; 
            if(freq==freq2) ans.push_back(i-len_a+1);
        
        }
        return ans;
    }
};
