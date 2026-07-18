class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i =0;
        int n = nums.size();
        for(int j = 1; j<n;j++){

            if(nums[j] != nums[i]){ // alag elemnent mila
                nums[i+1] = nums[j]; // i+1 mein alag value daal dii
                i++; // i ko aage badha ke phir check karenge
            }
        }
        return i+1; // i+1 isiliye kyunki number of elemnet nikalna hai aur i =0 isiliye i+1;
    }
};