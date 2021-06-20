class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1) return 1;
        if(n==2) return 2;
        
        int a = 1;
        int b = 2;
        int c;
        
        for(int i=2; i<n; ++i){
            // dp[i] = dp[i-1] + dp[i-2];
            c = a+b;
            a = b;
            b = c;
        }
        return c;
    }
};

//fibonacci
//T(n) = T(n-1)+T(n-2)
