class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;
        int n = nums.size();
        int temp = 0;
        for(int i=0;i<n;i++){
            temp += nums[i];
            result = max(result,temp);
            if(temp <= 0) temp = 0;
        }
        
        return result;
        
        
    }
};
