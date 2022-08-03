class Solution {
public:
    
    //3 variations for this problem
    //Variation 1 print entire pascal's triangle
    //Variation 2 print just 1 row of a pascal's triangle
    //Variation 3 print just 1 value of a given row 
    
    
    // Using Binomial formula pascal's triangle can be printed
    // to get a value of a given row in pascal's triangle use the formula (n-1) C (r-1)
    //where n is the number of row of pascal triancle and r is the column value of the row
    
    // to get a single value for a given row - n and column - r see below
    
    //for(int i = 0; i < r-1; ++i)
    //{
    //   res = res * (n - 1 - i);
    //   res = res / (i + 1);
    //}
    //   print(res) ---> print after for loop
    
    // to print all values of a given row  n we replace the r above with n 
    
    //for(int i = 0; i < n-1; ++i)
    //{
    //   res = res * (n - 1 - i);
    //   res = res / (i + 1);
    //   print(res) ---> print inside for loop
    //}
    
    // REFERENCE - Standard nCr calculation code
    //for(int i = 0; i < r; ++i)
    //{
    //   res = res * (n - i);
    //   res = res / (i + 1);
    //}
    //   print(res) ---> print after for loop
    
    vector<int> generateRow(int n)
    {
        vector<int> row;
        int res = 1;
        row.push_back(res);
        for(int i = 0; i < n-1; ++i)
        {
                res = res * (n - 1 - i);
                res = res / (i + 1);
                row.push_back(res);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>> sol;
    int n = numRows;    
    for(int i = 1; i <= n; i++)
    {
        vector<int> row = generateRow(i);
        sol.push_back(row);
    }
        return sol;
    }
};