class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       for(vector<int>::iterator i=nums.begin()+1;i<nums.end();){
          if(*i==*(i-1))
              nums.erase(i);
           else
               i++;
      }
        return nums.size();
    }
};
