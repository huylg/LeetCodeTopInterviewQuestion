class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int temp = 1;
        for(vector<int>::reverse_iterator i = digits.rbegin();i!=digits.rend() && temp != 0;i++){
            int sum = (*i+temp);
            *i = sum%10;
            temp = sum/10;
        }
        if(temp != 0)
            digits.insert(digits.begin(), temp);
        return digits;
    }
};
