class Solution {
public:
    bool isDiv(int n){
        if(n % 3 == 0) return true;

        return false;
    }
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int n : nums){
            if(!isDiv(n)){
                if(isDiv(n+1)) count++;
                else if(isDiv(n-1)) count++;
            } else {
                continue;
            }
        }

        return count;
    }
};