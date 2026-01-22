class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        // Calculate the total number of subsets (2^n) using bitwise shift
        int subsets = 1 << n;

        vector<vector<int>> ans; // store all subsets

        // Iterate through all numbers from 0 to 2^n - 1
        for(int num = 0; num < subsets; num++){
            vector<int> sub; // Temporary vector to hold the current subset

            // Iterate through each bit of the number
            for(int i = 0; i<n; i++){
                // If the ith bit is set, include nums[i] in the subset
                if(num & ( 1 << i)){
                    sub.push_back(nums[i]);
                }
            }
            ans.push_back(sub);
        }

        return ans;
    }
};