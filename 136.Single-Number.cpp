class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            result= result^nums[i];  /* Get the xor of all elements */
        }
        return result;
    }
};

//using xor skill
//(2^2) = 0
//(2^2^2) = 2
