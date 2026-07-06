class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string alphaString;
        for (auto& x : s) {
            x = tolower(x);
        }
        for(int i = 0; i<s.length(); i++)
        {
            if(isalnum(s[i]))
                alphaString+=s[i];
        }
        int l = 0;
        n = alphaString.length();
        int r = n-1;
        while(l != r && l < r)
        {
            if(alphaString[l] != alphaString[r])
            {
                // cout<<alphaString[l]<< "  "<< l << "   " <<r<<"  "<<alphaString[r]<<endl;
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
