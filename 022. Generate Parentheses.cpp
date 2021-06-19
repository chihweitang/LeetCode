class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", n, n);
        return result;    
    }
    
    void backtrack(vector<string> &res, string str, int l, int r){
        if(l==0 && r==0){ //full 
            res.push_back(str);
            return;
        }
        if(l>0) backtrack(res, str+"(", l-1, r);
        if(r>l) backtrack(res, str+")", l, r-1); //number of ) < number of (
    }
};

// l: (n-current(l))
// r: (n-current(r))
