class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> dict;
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D']= 500;
        dict['M']=1000;
        int len = s.length();
        int result = 0;
        int pre = INT_MAX;
        for(auto ch : s){
            int cur = dict[ch];
            if(pre < cur) result -= 2*pre;
            result += cur;
            pre = cur;
        }
        return result;
    }
};
