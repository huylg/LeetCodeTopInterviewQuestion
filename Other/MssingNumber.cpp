class Solution {
public:
    int missingNumber(vector<int>& nums) {
          ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        int n =nums.size();
        int result = (n*n+n)/2;
        for(auto i : nums) result -= i;
        return result;
    }
};
