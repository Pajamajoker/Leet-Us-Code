class Solution {
public:
    double myPow(double x, int n) {
    long long int nn = n;  // Take long long to avoid overflow of int when converting -ve n to +ve in edge case
    if(n<0) nn = -1*nn; // if n is -ve then calculate 1/ X^n
    double ans=1;
    while(nn)
    {
        if(nn%2==0){
            nn=nn/2;
            x= x*x;
        }
        else
        {
            ans = ans * x;
            nn = nn - 1; 
        }
    }
        if(n<0) return double(1.0)/double(ans);
        return ans;
        
    }

};