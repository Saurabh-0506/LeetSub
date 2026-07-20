class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int>result_1;
        vector<int>result_2;


        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                result_1.push_back(nums[i]);
            }
            else{
                result_2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int i =0;i<result_1.size();i++){
            ans.push_back(result_1[i]);
            ans.push_back(result_2[i]);
        }
        return ans;


        
    }
};