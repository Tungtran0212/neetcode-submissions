class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l =0;
        int res = 0;
        unordered_set<char> hashS;
        for(int right =0; right<n;right++)
        {
            while(hashS.find(s[right])!= hashS.end())
            {
                hashS.erase(s[l]);
                l++;
            }
            
                hashS.insert(s[right]);
            int tmp = right-l +1;
            res = max(tmp, res);
        }
        return res;

    }
};
