class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        vector<int>freq(100001,0);

        for(auto t_cost : costs){
            freq[t_cost]++;
        }
        int count =0;
        for(int t_cost = 1; t_cost<= 100000; t_cost++){

            while(freq[t_cost] > 0 && coins >= t_cost){
                coins = coins - t_cost;
                count++;

                freq[t_cost]--;
            }
        }

        return count;
    }
};