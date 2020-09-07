class Solution {
public:
    bool wordPattern(string pattern, string str) {
        stringstream ss(str);
        string s;
        vector<string> v;
        while(ss >> s) v.push_back(s);
        if (pattern.size() != v.size()) return false;
        unordered_map<string, char> maps;
        unordered_map<char, string> mapp;
        for (int i = 0; i < v.size(); ++i) {
            if (maps[v[i]] == 0 && mapp[pattern[i]] == "") { 
                maps[v[i]] = pattern[i]; 
                mapp[pattern[i]] = v[i]; 
                continue; 
            }
            if (maps[v[i]] != pattern[i]) return false;
        }
        return true;
    }
};
