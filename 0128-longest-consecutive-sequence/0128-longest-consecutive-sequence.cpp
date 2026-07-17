class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        //if(n==0) return 0;
        // sabko set mein daal liyaa
        unordered_set<int>st;
        for(auto x: nums){
            st.insert(x);
        }
        int longest = 0;
        int cnt = 0;
        for(auto x:st){
            if(st.find(x-1) == st.end()){ // checking jab uska x-1 present nhi hoga wahi start point 
                int curr = x;
                int cnt = 1;

            while(st.find(curr+1) != st.end()){ // tabtak chalte rho jab tak sequence mil raha hai
                curr++;
                cnt++;
            }
            longest = max(longest,cnt); // value update kr lo jo maximum mili hai longest sequence abhi tak     
            } 
        }
        return longest;

        
    }
};