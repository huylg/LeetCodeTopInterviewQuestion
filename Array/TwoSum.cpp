class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            int temp = target - nums[i];
                if(map[temp])
                    return {map[temp]-1,i};
                else{
                    map[nums[i]] = i+1;
                }
            
        }
        return {};
    }
};
