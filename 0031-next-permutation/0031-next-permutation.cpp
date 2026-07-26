class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        //pehle right side ye chiz dundho arr[i-1] < arr[i]

        int gola_index = -1;
        for(int i = n-1;i>0;i--){
            if(nums[i] > nums[i-1]){
                gola_index = i-1;
                break;
            }
        }
        // us gola_index ke right side mein usse badi value dundh kar swap kardo
        if(gola_index != -1){
        int swap_index = gola_index;//assuming 
        for(int j =n-1;j>gola_index;j--){
            if(nums[j] > nums[gola_index]){
                swap_index = j;
                break;
            }
         }  
            //swap kardo un dono ko phir
            swap(nums[gola_index],nums[swap_index]);
        }
        //jo bache remaining unko reverse
        reverse(nums.begin()+ gola_index+1,nums.end());
        
    }
};