class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        vector<std::vector<int> > res;
        vector<int> cur;
        dfs(candidates, target, res, cur, 0);
        return res;
    }
    
private:
    void dfs(std::vector<int> &candidates, int target, vector<vector<int> > &res, vector<int> &cur, int begin) {
        if (!target) {
            res.push_back(cur);
            return;
        }
        
        for (int i = begin; i != candidates.size() && target >= candidates[i]; ++i) {
            if(candidates[i] > target) //下一個值大於目前合，可省略
                break;
            cur.push_back(candidates[i]);
            dfs(candidates, target - candidates[i], res, cur, i);
            cur.pop_back();
        }
    }
};

// time   O(#candidates^target) 
// space  O(target)
