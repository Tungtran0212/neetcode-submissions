class Solution {
public:
    int potentialRow(vector<vector<int>>& nums, int target)
    {
        int m = nums.size();
        int n = nums[0].size();
        int i =0;
        int l = n-1;
        int r = m-1;
        while(i < r)
        {
            cout<<"Comparing "<<nums[i][l]<< "  "<<target<<endl;
            if(nums[i][l] >= target)
                return i;
            i++;
        }
        return i;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int rowToSearch = 0;
        if (m == 1 && n == 1)
            return matrix[0][0] == target ? true:false;
        if (m > 1)
            rowToSearch = potentialRow(matrix,target);
        cout<<"Search at " <<rowToSearch<<endl;
        int l = 0;
        int r = n - 1;
        int mid = -1;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            cout<<"Comparing " << matrix[rowToSearch][mid] << " "<<target<<endl;
            if(matrix[rowToSearch][mid] == target)
                return true;
            else{
                if(matrix[rowToSearch][mid] > target )
                    r = mid-1;
                else if(matrix[rowToSearch][mid] < target)
                    l = mid+1;
            }
        }

        return false;
    }
};
