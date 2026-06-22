class Solution {
public:

    bool check(unordered_map<char,int> &mpp, string &target){

        for(auto ch : target){

            if(mpp.find(ch) == mpp.end()){
                return false;
            }

            mpp[ch]--;

            if(mpp[ch] == 0){
                mpp.erase(ch);
            }
        }

        return true;
    }

    int rearrangeCharacters(string s, string target) {

        unordered_map<char,int> freq;

        for(auto ch : s){
            freq[ch]++;
        }

        int count = 0;

        while(check(freq, target)){
            count++;
        }

        return count;
    }
};