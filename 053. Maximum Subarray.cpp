class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) 
            return 0;
        
//        int n = A.length;
        int curMax = nums[0], preMax = nums[0];
        
        for (int i = 1; i < nums.size(); i++){
            preMax = max(preMax+nums[i], nums[i]);
            curMax = max(curMax, preMax);
        }
        return curMax;
        
    }
};

/*

dp[i] = Math.max(A[i] + dp[i - 1] , A[i]);

using DP

premax represent dp[i]
curmax represent max value


*/
