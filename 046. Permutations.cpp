class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        permuteRecursive(nums, 0, result);
        return result;
    }
    
    
    void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)	{
		if (begin >= num.size()) {
		    // one permutation instance
		    //cannot permute swap anymore
            result.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
            //recursive call
		    permuteRecursive(num, begin + 1, result);
		    // reset
		    swap(num[begin], num[i]);
		}
    }
};

    
