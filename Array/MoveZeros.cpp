class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i=0,j=0;
           int n = nums.size();
           
           while(i<n && j<n){
               if(nums[i]==0 && nums[j]!=0){
                   if(i<j){
                       swap(nums[i],nums[j]);
                       i++;
                       j++;
                   }else{
                       j++;
                   }
                   
               }else if(nums[j]==0)
                   j++;
               else if (nums[i] != 0)
                   i++;
           }
        
    }
};
