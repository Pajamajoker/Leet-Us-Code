class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) { 
            i--;
        }
        if (i >= 0) {
            // i is AND = 0 because in case of 3 2 1 such case i will become -1 and stop then the if 
            // condition will be false and just reverse
            int j = nums.size() - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i+1, nums.end());
    }

    
};