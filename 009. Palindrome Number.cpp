class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 )
            return false;
        
        int y = x;
        long r = 0;
        while(y>0){
            r = r*10 + y%10;
            y/=10;
        }
        return x==r;
    }
};

/*
r is reverse of x

*/
