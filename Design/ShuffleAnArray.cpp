class Solution {
public:
    vector<int> vec;
    Solution(vector<int>& nums) {
        vec = nums;
        srand (time(NULL));

    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return vec;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> shuff=vec;
        int n = shuff.size();
        for(int i=0;i<n;i++) swap(shuff[i],shuff[rand()%n]);
        return shuff;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
