class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        
        subsets(nums, 0, sub, subs);    
        return subs;
    }
    
private:
    void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs){
        
        subs.push_back(sub);
        
        for(int j=i; j<nums.size(); j++){
            sub.push_back(nums[j]);
            subsets(nums, j+1, sub, subs);
            sub.pop_back();
        }
        
    }
};

/*
recursive

[]->[1]->[1,2]->[1,2,3]
  ->[2]->[2,3]
  ->[3]
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size(), p = 1 << n;
        vector<vector<int>> subs(p);
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    subs[i].push_back(nums[j]);
                }
            }
        }
        return subs;
    }
};

//bit manipulation
/*
[1,2,3]
0 000 0
1 001 3
2 010 2
3 011 2,3
4 100 1
5 101 1,3
6 110 1,2
7 111 1,2,3
*/
