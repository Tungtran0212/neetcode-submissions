class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(auto str : strs )
        {
            string ss = to_string(str.length());
            s+= ss;;
            s+='#';
            s+=str;
        }
        cout<<s<<endl;
        return s;
    }
    //4#neet4#code
    vector<string> decode(string s) {
        size_t pos = 0;
        vector<string> strs;

        while (pos < s.length()) {
            // Find position of '#'
            size_t hashPos = s.find('#', pos);
            if (hashPos == string::npos) break;

            // Get the number before '#'
            int len = stoi(s.substr(pos, hashPos - pos));

            // Extract the word after the '#'
            string word = s.substr(hashPos + 1, len);
            strs.push_back(word);
            cout << word << endl;

            // Move pos to the next segment
            pos = hashPos + 1 + len;
        }
        return strs;
    }
};
