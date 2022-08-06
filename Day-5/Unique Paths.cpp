class Solution {
public:
    
    int solve(int m, int n, vector<vector<int>> &grid)
    {
        if(m==0 && n == 0)
            return 1;
        if(m < 0 || n < 0)
            return 0;
        
        if (grid[m][n]!=-1) return grid[m][n];
        
        int left = solve(m,n-1,grid);
        int up = solve(m-1,n,grid);
        
        return grid[m][n] = left + up;
    }
    int uniquePaths(int m, int n) {
    vector<vector<int>> grid(m+1,vector<int>(n+1,-1));
    return solve(m-1,n-1,grid);
    
    }
};