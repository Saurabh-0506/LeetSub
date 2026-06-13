class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string  ans ="";
        for(string &word:words){
            int total =0;
            for(char ch : word){
                total += weights[ch - 'a'];
            }
        int mod = total%26;

        // reversing
        char mapped = 'z' - mod;
        ans.push_back(mapped);
        }
    return ans;
        
    }
};