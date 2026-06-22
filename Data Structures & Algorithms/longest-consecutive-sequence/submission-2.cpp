class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1)
            return 0;
        unordered_set<int> Hset; 

        int conS=1;
        for(auto num : nums)
        {
            Hset.insert(num);
        }
        for(auto num : nums)
        {
            int start = num-1;
            if( Hset.find(start) != Hset.end() )
            {
                int found = num;
                int tempCons=1;
                while(Hset.find(found) != Hset.end())
                {
                    found++;
                    tempCons++;
                }
                conS=max(tempCons,conS);
                start=found;
                continue;
            }
        }
        return conS;
    }
};
