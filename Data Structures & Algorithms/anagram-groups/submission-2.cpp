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
        for(auto str : strs)
        {
            int count[26] = {0};
            for( auto c : str ){
                count[c -'a']++;
            }
            string key;
            for(int i = 0 ; i < 26 ; i++)
            {
                key += "#";
                key += std::to_string(count[i]);
                cout<<key<<endl;
            }
            hashMap[key].push_back(str);
        }
        for (auto& [key, group] : hashMap) 
        {
            res.push_back(std::move(group));
        }
        return res;
    }
};
