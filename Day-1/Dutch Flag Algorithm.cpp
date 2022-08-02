//Author: Prathamesh Joshi
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    
    // idea is to use pointers to get the numbers into correct positions
    // mid pointer (m)  is our iterator, high pointer (h) in the end should point to the index one less than the start of 2s and during iterations tries to move to that position.
    // low pointer (l) in the end should point to the index of start of 1s and during iterations tries to move to that position
    
    // TC: O(n)
    // SC: O(1)

    void sortColors(vector<int>& nums) {
        int h=nums.size(),m=0,l=0;
        while(m<h)
        {
            if(nums[m] == 0)
            {
                swap(nums[m],nums[l]);
                m++;
                l++;
            }
            
            if(nums[m] == 1)
                m++;
            
            if(nums[m] == 2)
            {
                swap(nums[m],nums[h]);
                m++;
                h--;
            }
        }
               
    }
};
