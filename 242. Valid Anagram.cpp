class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int n=s.size();
        int count[26] = {0};
        
        for(int i=0; i<n; i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int j=0; j<26; j++){ //from a to z
            if(count[j])
                return false;
        }
        return true;
    }
};
//8ms 86.61%






//12 ms

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};
