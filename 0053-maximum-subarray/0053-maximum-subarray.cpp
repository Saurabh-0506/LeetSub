class Solution {
public:
    int maxSubArray(vector<int>& nums) { //KADANES ALGORITHM

        int n = nums.size();
        int max_Sum = INT_MIN;
        int curr_Sum = 0;
        for(int i =0;i<n;i++){

            curr_Sum +=nums[i];

            max_Sum = max(max_Sum,curr_Sum);

            if(curr_Sum <0){
                curr_Sum =0;
            }
        }
        return max_Sum;

        
    }
};