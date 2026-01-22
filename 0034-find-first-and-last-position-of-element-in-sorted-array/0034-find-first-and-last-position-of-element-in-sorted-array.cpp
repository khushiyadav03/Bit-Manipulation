class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int a = -1, b = -1;

        while(i < nums.size()){
            if(nums[i] == target){
                a = i;
                break;
            }
            i++;
        }

        while(j >= 0){
            if(nums[j] == target){
                b = j;
                break;
            }
            j--;
        }

        return {a, b};
    }
};