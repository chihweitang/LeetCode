class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;  //new array index
        
        //0, 1
        if(nums.size() < 2)
            return nums.size();
        //>2
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1])
                nums[j++] = nums[i];
        }
        return j;
    }
};

//O(n)
