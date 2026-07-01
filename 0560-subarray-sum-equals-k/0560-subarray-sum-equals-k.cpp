class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
       
        int count =0;
        int cumm_sum =0;
        mp.insert({0,1}); // starting mein zero insert karlenge  0 cumm _sum insert in map
        int n =nums.size();
        for(int i =0;i<n;i++){
            cumm_sum += nums[i];

            if(mp.find(cumm_sum - k) != mp.end()){
                count = count + mp[cumm_sum -k]; // +1 count nhi karenge jitni baar dekha utni baar add
            }
            mp[cumm_sum]++; // map mein add
        }
        return count;
        
        
    }
};