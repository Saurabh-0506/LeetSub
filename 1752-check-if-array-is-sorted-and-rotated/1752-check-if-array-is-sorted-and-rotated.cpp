class Solution {
public:
    bool check(vector<int>& nums) {
        
        // sirf ek pair aisa hona chahiye jaha arr[i-1] > arr[i] tab sahi hai agar to do pair to galat
        int n = nums.size();
        int count = 0;
        for(int i =1;i<n;i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        } 
        // saare element check ho gaye but pehla wala rehta hai to use bhi check
        if(nums[n-1] > nums[0]){
            count++;
        }
        return count <= 1; // agar koi exist nahi karta jaise 1 1 1 toh uske liye 1 se bhi km toh true
    }
};