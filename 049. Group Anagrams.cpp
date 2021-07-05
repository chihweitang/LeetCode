class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        
        for(auto s:strs){
            string t = s;
            sort(t.begin(), t.end());   //generate key
            mp[t].push_back(s);         //push original string to value
        }
        
        vector<vector<string>> ans;
        
        for(auto m:mp){
            ans.push_back(m.second); //push value
        }
        return ans;
    }
};

/*

x.first  : 第一個稱為關鍵字(key)，在Map裡面，絕對不會重複.
x.second : 第二個稱為關鍵字的值(value)

abt : ["bat"],
ant : ["tan","nat"],
aet : ["eat","tea","ate"]

*/
