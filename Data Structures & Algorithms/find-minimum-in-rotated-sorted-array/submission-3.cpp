class Solution {
public:
    int findMin(vector<int> &nums) {
        int n  = nums.size();
        int l = 0;
        int r = n-1;
        int mid = -1;
        int i  = 0 ;
        while(l < r )
        {
            mid = l + (r - l)/2;
            cout<<l<<"  "<<mid<<"  "<<r<<"  "<<endl;
            cout<<nums[l]<<"  "<<nums[mid]<<"  "<<nums[r]<<"  "<<endl<<endl;;
            if(nums[mid] > nums[r])
                l = mid + 1;
            else
                r = mid;
        }
        return nums[l];

    }
};
