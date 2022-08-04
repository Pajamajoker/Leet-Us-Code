class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    
        int rows = matrix.size();
        int cols = matrix[0].size();
        //transpose
	
	// NOTE: To transpose a matrix, use j only till j<=i

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                int tmp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = tmp;
            }
        }
        //reflect
        for(int i=0;i < rows; i++)
        {

	   // NOTE: To reflect use j only till j<cols/2

            for(int j=0;j<cols/2;j++)
            {
                int temp = matrix[i][j];
                matrix[i][j] =  matrix[i][rows-1-j];
                matrix[i][rows-1-j] = temp;
            }
        }
    }
};