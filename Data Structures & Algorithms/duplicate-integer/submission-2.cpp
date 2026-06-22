class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int>hashMaps;
        for(auto i : nums)
        {
            if( !hashMaps.empty() && hashMaps[i]== 1)
            {
                return true;
            }
            hashMaps[i]++;
        }
        return false;
    }
};
