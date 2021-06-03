class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1, m = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(count == 0){
                count++;
                m = nums[i];
            }
            else if(m == nums[i])
                count++;
            else
                count--;
        }
        return m;
    }
};

//O(n) time
//O(1) space
