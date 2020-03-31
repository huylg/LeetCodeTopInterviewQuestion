class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for(int i=0;i<n-m+1;i++){
            int count = 0;
            for(;count<m && haystack[count+i] == needle[count];count++){
            }
            if(count == m)
                return i;
        }
        return -1;
    }
};
