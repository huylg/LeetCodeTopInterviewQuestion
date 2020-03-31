class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length())
            return false;
        
        vector<int> smap;
        smap.resize(26,0);
        vector<int> tmap;
        tmap.resize(26,0);

        for(int i=0;i<s.length();i++)
            smap[(int)s[i]-97]++;
        for(int i=0;i<t.length();i++)
            tmap[(int)t[i]-97]++;
        for(int i = 0;i<26;i++){
            if(smap[i] != tmap[i])
                return false;
        }
        return true;
    }
};
