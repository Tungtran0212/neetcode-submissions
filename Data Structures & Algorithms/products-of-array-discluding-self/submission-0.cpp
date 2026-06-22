class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n  = nums.size();
        vector<int> res(n,1);
        int left = 1; 
        int right = 1;
        //0, 1
        //1, 1
        //2, 2
        //3, 8
        for(int i=0;i<n;++i)
        {
            res[i] = left;
            // cout<<i<<"    "<<left<<"   "<<res[i]<<endl;

            left = left *nums[i];
        }
        //
        // 2,
        // 1,
        // 0 
        for(int i = n -1; i>=0; --i)
        {
            res[i]= res[i]*right;
            // cout<<i<<"    "<<right<<"   "<<res[i]<<endl;
            right = right*nums[i];
        }
        return res;
    }
};
