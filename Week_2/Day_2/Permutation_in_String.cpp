class Solution {
public:
   
    bool checkInclusion(string s1, string s2) {
        //Time: O(N) Space:O(1);
        int len_a=s1.length();
        int len_b=s2.length();
        if(len_a > len_b) return false;
       vector<int>freq(26,0);
        for(int i=0;i<len_a;i++){
            freq[s1[i]-'a']++;
        }
        vector<int>freq2(26,0);
        int i=0;
        
        while(i<len_a) {freq2[s2[i]-'a']++; i++;}
        if(freq==freq2) return true;
        for( i=len_a;i<len_b;i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-len_a]-'a']--;; 
            if(freq==freq2) return true;
        
        }
        
        return false;
    }
    
};
