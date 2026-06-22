class Solution {
public:
    bool freqCheck(vector<int>& s1, vector<int>& s2)
    {
        int check = 0;
        for(int i = 0; i<26; i++){
            cout<<s2[i];
        }
        cout<<endl;
        for(int i = 0; i<26; i++){
            cout<<s1[i];
        }
        cout<<endl;
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
            int index2 = s2[i] - 'a';
            tarFreq[index]++;
            checkFreq[index2]++;
        }
        int l = 0;
        int r = l+n-1;
        while(r<len-1)
        {
            if(freqCheck(checkFreq, tarFreq))
                return true;
            checkFreq[s2[l]-'a']--;
            l++;
            r++;
            checkFreq[s2[r] - 'a']++;
        }
        if(freqCheck(checkFreq, tarFreq))
            return true;
        return false;

    }
};
