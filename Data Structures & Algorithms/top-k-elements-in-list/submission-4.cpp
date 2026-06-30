class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> freq(n+1);
        unordered_map<int, int>count;
        // Test case 1,2,1,2,1,2,3,1,3,2
        // Counting and add key
        for(auto n : nums)
        {
            count[n]++;
        }
        // for now, we have [1,4], [2, 4], [3,2]
        for(const auto & entry: count)
        {
            freq[entry.second].push_back(entry.first);
        }
        // the freq now looks like this
        // [4, {1,2}] [3, {2}]
        // Now we go through the freq as descending order
        vector<int> res;
        for (int i = freq.size() - 1; i > 0; --i) {
            for (int n : freq[i]) {
                res.push_back(n);
                if(res.size()==k)
                    return res;
            }
        }
        return res;
    }
};
