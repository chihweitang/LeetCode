class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> charIndex(128, -1); //ASCII Code
        int start = 0;
        int ans = 0;
        
        for(int i=0; i<s.length(); ++i){
            start = max(start, charIndex[s[i]]+1);
            
            charIndex[s[i]] = i;
            
            ans = max(ans, i-start+1);
        }
        return ans;
    }
};

/*
time O(n)

space O(128) vector

eg. abbca 
b: 
start = max(0, 1+1) = 2
char[[b]] = 2 
ans = max(2, 2-2+1) = 2

*/
