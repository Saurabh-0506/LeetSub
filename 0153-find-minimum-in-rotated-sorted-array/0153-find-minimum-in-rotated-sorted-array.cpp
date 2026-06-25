class Solution {
public:
    int findPivot(vector<int>&nums){
         int n = nums.size();
        int s =0;
        int e =n-1;

        while(s < e){
            int mid = s + (e-s)/2;

            if(nums[mid] >=nums[0]){
                s = mid +1;
            }
            else{
                e =mid;
            }
        }
        return s;
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();

        if(nums[0] < nums[n-1]){
            return nums[0];
        }
        else{
            int pivot = findPivot(nums);

            return nums[pivot];
        }
        
    }
};