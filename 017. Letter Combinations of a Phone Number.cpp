class Solution {
public:
    const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits=="") return {};
        
        vector<string> result;
        result.push_back("");
        
        for(auto digit:digits){
            vector<string> tmp;
            for(auto canditate:pad[digit-'0']){
                for(auto s:result){
                    tmp.push_back(s+canditate);
                }
            }
            result.swap(tmp);
        }
        return result;
        
    }
};

/*
bfs     0ms
time:   O(4^n)
space:  O(2*4^n)

input:23

result:[a, b, c]
result:[ad, ae, af, bd, be, bf, cd, ce, cf]

*/
