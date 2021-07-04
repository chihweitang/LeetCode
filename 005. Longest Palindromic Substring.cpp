class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1)
            return s;
        
        int start = 0;
        int max_length = 1;
                
        for(int mid = 0; mid<s.size(); ){
            int left = mid;
            int right = mid;
            //ignore duplicate
            while(right < s.size()-1 && s[right]==s[right+1])
                right++;
            //for next iter
            mid = right+1; 
            //check palindrome
            while(right < s.size()-1 && left>0 && s[left-1]==s[right+1]){
                left--;
                right++;
            }
            //update
            int new_length = right - left + 1;
            if(new_length > max_length){
                max_length = new_length;
                start = left;
            }
        }
        return s.substr(start, max_length);        
    }
};

// 4ms
