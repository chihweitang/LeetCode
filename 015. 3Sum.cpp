class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for (unsigned int i=0; i<nums.size(); i++) {
            if ((i>0) && (nums[i]==nums[i-1]))
                continue;
            //remove duplicate i
            
            int l = i+1, r = nums.size()-1;
            while (l<r) {
                int s = nums[i]+nums[l]+nums[r]; //sum
                if (s>0) 
                    r--; //too large
                else if (s<0) 
                    l++; //too small
                else {
                    res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                    
                    while (nums[l]==nums[l+1] && l+1<r) 
                        l++;
                    while (nums[r]==nums[r-1] && l<r-1) 
                        r--;
                    l++; r--;
                }
            }
        }
        return res;
    }
};
