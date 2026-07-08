class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        // bottom up
        int n = cost.size();
        if(n==2) return min(cost[0],cost[1]); // n=2 given constraint

        for(int i =2;i<n;i++){
            cost[i] = cost[i] + min(cost[i-1],cost[i-2]); // current index
        }
        return 0 + min(cost[n-1] , cost[n-2]); // n out of bound
        
    }
};