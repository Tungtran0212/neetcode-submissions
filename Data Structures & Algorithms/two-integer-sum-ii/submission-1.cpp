class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> res;
        int left =0 ,right = numbers.size()-1;
        while(left != right && right > left )
        {
            int sum = numbers[left] + numbers[right];
            cout <<numbers[left]<<"  "<<numbers[right]<<endl;
            if( sum == target )
            {
                res.push_back(left+1);
                res.push_back(right+1);
            }
            else if( sum > target )
            {
                right--;
            }
            else if( sum < target )
            {
                left++;
            }
            if(res.size() == 2)
                return res;
        }
        return res;
    }
};
