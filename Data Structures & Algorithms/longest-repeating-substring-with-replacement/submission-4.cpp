class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        int left = 0;
        int right = 0;
        int n = s.length();
        int count[26]={0};
        int maxFreq = 0;
        while(right<n)
        {
            count[s[right] - 'A']++;
            maxFreq = max(maxFreq, count[s[right] - 'A']);
            int currentLen = right-left+1;
            
            if(currentLen - maxFreq > k)
            {
                count[s[left] - 'A']--;
                left++;
            }
            else
            {
                res = max(res, currentLen);
            }

            right++;
        }
        return res;
    }
};