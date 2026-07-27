class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int n = nums.size();
        // int product = 0;
        // for(int i =0;i<n;i++){
        //     for(int j =i+1;j<n;j++){
        //         int prod = (nums[i] - 1) * (nums[j]-1);
        //         product = max(prod,product);
        //     }
        // }
        // return product;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=n-1;
        int j=n-2;
        int maxproduct=(nums[i]-1)*(nums[j]-1);
        return maxproduct;
    }
};
