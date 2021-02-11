class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, n = nums.size();
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[n - 1];
                n--;
            }
            else
                i++;
        }
        return n;
    }
};

//when nums[i] == val, swap nums[i] to nums[last], last--
//[1,2,3] val = 1
//[3,2,1]
