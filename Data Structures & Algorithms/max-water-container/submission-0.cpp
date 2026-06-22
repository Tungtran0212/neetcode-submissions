class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int maxArea;
        int left = 0; 
        int right = heights.size()-1;
        while(left <= right)
        {
            int minHe = min(heights[right], heights[left]);
            int area = (right - left)*minHe;
            if(minHe == heights[right])
                right--;
            else
                left++;
            maxArea = max(area, maxArea);
        }
        return maxArea;
    }
};
