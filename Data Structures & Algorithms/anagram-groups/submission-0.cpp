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
        std::map<std::map<char,int>, vector<string>> hashMap;
        std::map<char,int> hashMapKey;
        
        char str[26] = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
            'u', 'v', 'w', 'x', 'y', 'z'
        };
        for(auto s : strs )
        { 
            for(auto c: str)
            {
                for(int i = 0;i<s.length();i++)
                {
                    if(s[i]==c)
                        hashMapKey[c]++;
                }
            }
            auto iter = hashMap.find(hashMapKey);
            if(iter != hashMap.end() )
            {   
                // iter->second.
                iter->second.push_back(s);
            }
            else
            {
                hashMap[hashMapKey].push_back(s);
                for (const auto& outer : hashMap) {
                    const auto& innerKey = outer.first;              // map<char, int>
                    const auto& valueList = outer.second;            // vector<string>

                    std::cout << "Key: { ";
                    for (const auto& [ch, val] : innerKey) {
                        std::cout << ch << ":" << val << " ";
                    }
                    std::cout << "} -> Values: ";

                    for (const std::string& word : valueList) {
                        std::cout << word << " ";
                    }
                    std::cout << "\n";
                }
                
            }
            
            hashMapKey.clear();
            
        }
        for(const auto& i : hashMap)
        {
            res.push_back(i.second);
        }
        return res;
    }
};
