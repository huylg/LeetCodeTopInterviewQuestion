class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> result;
        if(!n) return result;
        result.resize(n);
        for(int i=0;i<n;i++) result[i].resize(i+1);
        
        result[0][0] = 1;
        
        for(int i=1;i<n;i++){
            for(int j=0;j<result[i].size();j++)
            {
                int prev_j = (j-1>=0)?result[i-1][j-1]:0;
                int next_j = (j<result[i-1].size())?result[i-1][j]:0;

                result[i][j] = next_j + prev_j;
            }
        }
        return result;
        
    }
};
