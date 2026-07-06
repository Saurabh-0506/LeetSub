class Solution {
public:
    int fib(int n) {
        // bottom up approach

        vector<int>dp(n+1);
        if(n<=1){
            return n;
        }
        dp[1] = 1;
        dp[0] = 0;

        for(int i =2;i<=n;i++){
            dp[i] = dp[i-2] + dp[i-1];
        }
        return dp[n];
          
    }
};