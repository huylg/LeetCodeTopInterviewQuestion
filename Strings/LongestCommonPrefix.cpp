class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int count=0;
        if(strs.empty())
            return result;
        while(true){
            
            for(int i=0;i<strs.size();i++){
                if(count >= strs[i].length())
                    return result;
   
            }
            char temp = strs[0][count];
            for(int i=0;i<strs.size();i++){
             
                 if(temp != strs[i][count])
                    return result;
            }
            result += temp;
            count++;
        }
        return result;
    }
};
