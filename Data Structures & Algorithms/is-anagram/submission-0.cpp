class Solution {
public:
    bool isAnagram(string s, string t) {
        //edge case
        if ((s.length() != t.length()) || (s.length() == 0 || t.length() == 0))
            return false;
        std::map<char, int > mapS;
        std::map<char, int > mapT;
        for(auto c : s)
        {
            mapS[c]++;
        }
        for(auto c : t)
        {
            mapT[c]++;
        }
        for( auto c : s )
        {
            if (mapT[c] != mapS[c] )
                return false;
        }
        return true;
    }
};
