class Solution {
public:
    bool freqCheck(vector<int>& s1, vector<int>& s2)
    {
        int check = 0;
        // for(int i = 0; i<26; i++){
        //     cout<<s2[i];
        // }
        // cout<<endl;
        // for(int i = 0; i<26; i++){
        //     cout<<s1[i];
        // }
        // cout<<endl;
        for(int i = 0; i<26; i++){
            if(s1[i] == s2[i])
                check++;
        }
        return check == 26 ? true : false;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
        vector<int> tarFreq(26,0);
        vector<int> checkFreq(26,0);
        int n = s1.length();
        int len  = s2.length();
        for(int i = 0; i<n; i++)
        {
            int index = s1[i] - 'a';
            tarFreq[index]++;
        }
        int l = 0;
        while(l+n-1<len)
        {
            for(int k = n-1; k >= 0; k--)
            {
                int index = s2[l+k] - 'a';
                checkFreq[index]++;
            }
            if(freqCheck(checkFreq, tarFreq))
                return true;
            for(int k = n-1; k >= 0; k--)
            {
                int index = s2[l+k] - 'a';
                checkFreq[index]--;
            }
            l++;
        }
        return false;

    }
};
