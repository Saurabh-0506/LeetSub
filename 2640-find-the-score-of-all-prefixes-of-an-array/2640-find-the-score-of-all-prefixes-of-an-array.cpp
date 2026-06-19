class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {

        
        int n = nums.size();
        vector<long long>ans(n,0);

        int maxi =0;
        int store = 0;

        for(int i =0;i<n;i++){
            maxi = max(maxi ,nums[i]);
            ans[i] = nums[i] + maxi;

        }
        for(int i =1;i<n;i++){
            ans[i] += ans[i-1];
        }
        return ans;


        
    }
};