class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            int size = matrix.size();

          for(int k=0;k<size/2;k++){
        
    for(int i=k;i<size-k-1;i++){
        int j = k*size + i;
        int value = matrix[j/size][j%size];
        do{
            int i2 = j%size;
            int j2 = -(j/size)+size - 1;
            j = i2*size + j2;
            swap(value,matrix[i2][j2]);
        }while(j!=k*size + i);

        
    }
    }
        
    }
};
