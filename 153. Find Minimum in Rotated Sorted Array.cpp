class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r && nums[l] > nums[r]) {
            int m = l + (r - l) / 2;
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        return nums[l];
        
            
    }
};

//binary search O(lgn)


/*
for(int i=1; i<nums.size(); ++i){
            if(nums[i]<nums[i-1]){
                return nums[i];
            }   
        }
        return nums[0];
        
O(n)
        
*/
