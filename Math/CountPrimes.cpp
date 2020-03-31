class Solution {
public:
    int countPrimes(int n) {
        vector<bool> primes;
        primes.resize(n+1,true);
        primes[0] = false;
        primes[1] = false;
        int result = 0;
        for(int i=2;i<n;i++)
        {
            if(primes[i]){
                for(int j=2;j<=n/i;j++) primes[j*i] = false;
                result +=1;
            }
        }
        
        return result;
        
    }
};
