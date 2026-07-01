class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> resV;
        for(int i = 0; i < nums.size() ; i++)
        {
            if(i>0 && nums[i]== nums[i-1])
                continue;
            int sum = 0-nums[i];           
            int left = i+1;
            int right = nums.size() -1;
            while( left < right )
            {                
                vector<int> element;
                int sumIn = nums[left]+nums[right];
                if( sumIn > sum )
                {
                    right--;
                }
                else if( sumIn < sum )
                {
                    left++;
                }
                else if( sumIn == sum )
                {
                    element.push_back(nums[i]);
                    element.push_back(nums[left]);
                    element.push_back(nums[right]);
                    resV.push_back(element);
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for the third element (right pointer)
                    // Move right pointer backward while it's the same as the the current found number
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;

                }
            } 
           
        }
        return resV;
    }
};