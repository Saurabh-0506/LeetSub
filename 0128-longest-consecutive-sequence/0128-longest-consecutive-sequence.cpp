class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        unordered_set<int>st;
        for(auto x:nums){
            st.insert(x);
        }
        int count = 0;
        int longest = 0;
        for(auto x:st){
            if(st.find(x-1) == st.end()){
                int curr = x;
                int count =1;
            
            while(st.find(curr+1) != st.end()){
                curr++;
                count++;
            }
            longest = max(count,longest);
         }  
           
        }
        return longest;
        
    }
};