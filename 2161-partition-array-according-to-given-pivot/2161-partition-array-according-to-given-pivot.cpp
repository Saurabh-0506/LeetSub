class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        int n = nums.size();

        vector<int>result1;
        vector<int>result2;
        vector<int>result3;
        vector<int>ans;
        for(int i =0;i<n;i++){
            if(nums[i] < pivot){
                result1.push_back(nums[i]);
            }
            else if(nums[i] == pivot){
                result2.push_back(nums[i]);
            }
            else{
                result3.push_back(nums[i]);
            }
        }
            for(auto x:result1){
                ans.push_back(x);
            }
            for(auto x:result2){
                ans.push_back(x);
            }
             for(auto x:result3){
                ans.push_back(x);
            
        }

        return ans;
        
    }
};