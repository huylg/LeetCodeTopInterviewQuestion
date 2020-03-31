class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vec;
        vec.resize('z'-'a'+1,0);
        for(int i=0;i<s.length();i++)
            vec[(int)s[i]-97]++;
        for(int i=0;i<s.length();i++)
            if(vec[(int)s[i]-97]==1)
                return i;
        return -1;
    }
};
