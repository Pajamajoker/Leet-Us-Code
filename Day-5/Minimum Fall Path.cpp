class Solution {
public:
    
    int fall(vector<vector<int>>& matrix , int lvl , int ind , vector<vector<int>>& dp) {
        
        if(lvl > matrix.size() - 1)
            return 0;
        
        if(ind <0 || ind >= matrix.size()) {
            return INT_MAX;
        }
        
        if(lvl == matrix.size() - 1) {
            return matrix[lvl][ind];
        }
        
        if(dp[lvl][ind] != -1)
            return dp[lvl][ind];
        
        int l = fall(matrix , lvl + 1 , ind - 1 , dp);
        int d = fall(matrix , lvl + 1 , ind , dp);
        int r = fall(matrix , lvl + 1 , ind + 1 , dp);
        
        return dp[lvl][ind] = min({l , d , r}) + matrix[lvl][ind];
        
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int ans = INT_MAX;
    
        int n = matrix.size();
        
        vector<vector<int>> dp(n , vector<int>( n , -1));
        
        for(int i=0;i<matrix.size();i++) {
            ans = min( ans , fall(matrix , 0 , i , dp));
        }
        
        return ans;
    }
};