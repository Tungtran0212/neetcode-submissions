class Solution {
public:
    int hoursToEat(vector<int>& piles, int b){
        int hours = 0;
        int n = piles.size();
        for(int i = 0;i < n; i++)
        {
            hours += ((piles[i]+b-1)/b);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            int hours = hoursToEat(piles, mid);

            if (hours <= h)
            {
                // mid is fast enough, try a smaller speed
                right = mid;
            }
            else
            {
                // mid is too slow
                left = mid + 1;
            }
        }

        return left;
    }
};
