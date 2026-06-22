class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashS;
        for(auto num : nums){
            if(hashS[num] != 0)
                return true;
            hashS[num]++;

        }
        return false;
    }
};