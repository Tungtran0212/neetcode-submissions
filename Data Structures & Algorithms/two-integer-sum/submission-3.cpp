class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indexes;
        std::unordered_map<int, int> hashMap;
        // Populate the hash map
        for (int i = 0; i < nums.size(); ++i) {
            int found = target- nums[i];
            auto iter = hashMap.find(found);
            if( iter!= hashMap.end())
            {
                indexes.push_back(iter->second);
                indexes.push_back(i);
                return indexes;
            }
            hashMap[nums[i]] = i;
            indexes.clear();
        }
        return indexes;
    }
};
