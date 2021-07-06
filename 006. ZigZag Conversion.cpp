class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        string arr[numRows];
        bool down = true;
        int id = 0;
        string ans = "";
        
        for(int i=0; i<numRows; ++i)
            arr[i] = "";
        
        for(int i=0; i<s.length(); ++i){
            
            arr[id] += s[i];
            
            //last row, turn up
            if(id == numRows-1)
                down = false;
            //first row, turn down
            else if(id == 0)
                down = true;
            
            if(down){
                id++;
            }
            else{
                id--;
            }
        }
        
        for(int i=0; i<numRows; ++i){
            ans += arr[i];
        }
        return ans;
    }
};
