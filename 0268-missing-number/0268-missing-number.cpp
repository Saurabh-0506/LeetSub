class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total_Sum = n*(n+1)/2;

        int expected_Sum =0;
        for(int i =0;i<n;i++){
            expected_Sum += nums[i];
        }
        return total_Sum - expected_Sum;
        
    }
};