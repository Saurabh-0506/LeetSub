class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; // for tracking of zero
        int mid = 0; // for tracking elements
        int high = n-1; // for tracking 2
        while(mid <= high){ // while loop not for loop
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};