class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for(int i=0;i<=31;i++){
            if((1<<i)&n)    
                result |= (1<<(31-i));
          
        }
        return result;
    }
};
