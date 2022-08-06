class Solution {
public:
    
    int solve(int m, int n, vector<vector<int>> &grid, vector<vector<int>>& obstacleGrid)
    {
        if(m < 0 || n < 0)
            return 0;
        
        if(obstacleGrid[m][n] == 1) return 0;

        if(m==0 && n == 0)
            return 1;
                
        if (grid[m][n]!=-1) return grid[m][n];
        
        int left = solve(m,n-1,grid, obstacleGrid);
        int up = solve(m-1,n,grid, obstacleGrid);
        
        return grid[m][n] = left + up;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
     
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
        
    vector<vector<int>> grid(m+1,vector<int>(n+1,-1));
    return solve(m-1,n-1,grid,obstacleGrid);
    
    }
};