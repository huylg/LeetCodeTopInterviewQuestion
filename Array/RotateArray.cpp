class Solution {
public:
    void rotate(vector<int>& nums, int k) {
          //solve
    int n = nums.size();
    k %= n;
    int count = 0;
    for(int i=0;count<n;i++)
    {
        int j = i;
        int value = nums[j];
        do{
            j = (j+k)%n;
            swap(nums[j], value);
            count++;
        }while (j!=i);
    }
    }
};
