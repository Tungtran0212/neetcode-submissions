class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //edge case
        vector<vector<string>> res;
        if(strs.size() < 2)
        {
            res.push_back(strs);
            return res;
        }
        std::unordered_map<std::string, std::vector<std::string>> hashMap;
        for(auto s : strs )
        { 
            int count[26] = {0};
            for (char c : s) count[c - 'a']++;
            std::string key;
            for (int i = 0; i < 26; ++i) {
                key += '#';  // delimiter to avoid confusion between numbers
                key += std::to_string(count[i]);
            }
            hashMap[key].push_back(s);
        }
        for (auto& [key, group] : hashMap) {
            res.push_back(std::move(group));  // Move to avoid copying
        }   
        return res;
    }
};
