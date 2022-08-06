// Intuition is every element in array needs to at each of the indexes in the array
// so we swap each element with every other element and we do this in a pattern
// the pattern is we start from beginning call this iterator Index, then we use a for loop and loop from this Index to the end of array and swap the element at Index with
//each remaining element.
// Once swapped we move our Index to point at the next Index then repeat these steps for the resultant arrays after swaps are done.
// The backtracking step now is self explainatory :P

class Solution {
public:
    
    void getPermutations(int index, vector<int>& nums, int N,vector<vector<int>> &sol)
    {
        if(index == N)
        {
            sol.push_back(nums);
            return;
        }
        
        for(int i=index; i<N;i++)
        {
            swap(nums[index], nums[i]);
            getPermutations(index+1,nums,N,sol);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
     
        vector<vector<int>> sol;
        int N = nums.size();
        getPermutations(0,nums,N,sol);
        return sol;
        
    }
};

//                                    [1,2,3]

//       [1,2,3]                      [2,1,3]                   [3,2,1]

// [1,2,3]      [1,3,2]         [2,1,3]     [2,3,1]       [3,2,1]    [3,1,2]


//

