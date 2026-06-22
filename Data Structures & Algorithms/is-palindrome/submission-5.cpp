class Solution {
public:
    bool isPalindrome(string s) {
        //Eversince all the characters in S must be alphabet 
        //Edge case handling
        
        string alphaString;
        for(int i = 0; i<s.length(); i++)
        {
            if(isalnum(s[i]))
                alphaString+=s[i];
        }
        //1a2
        int left =0, right = alphaString.length()-1;
        
        while(left != right && left < right )
        {
            if(tolower(alphaString[left]) != tolower(alphaString[right]))
            {
                
                cout<<alphaString[left]<< "  "<< left << "   " <<right<<"  "<<alphaString[right]<<endl;
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
