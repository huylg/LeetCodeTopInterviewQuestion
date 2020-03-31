class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(map[nums[i]]!=0)
                return true;
            map[nums[i]]++;
        }
        return false;
    }
};
