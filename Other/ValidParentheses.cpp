class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,int> dict;
        dict['(']=1;
        dict[')']=-1;
        dict['{']=2;
        dict['}']=-2;
        dict['[']=3;
        dict[']']=-3;

        for(auto ch : s){
            if(dict[ch]>0){
                st.push(ch);
            }else{
                if(!st.empty()&&dict[ch]==-dict[st.top()]) st.pop();
                else return false;
            }
        }
        return st.empty();
    }
};
