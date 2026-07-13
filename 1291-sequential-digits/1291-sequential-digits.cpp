class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int>result;
        for(int i =1;i<=9;i++){ // number can be only 1-9
            int num =i;
            for(int j =i+1;j<=9;j++){ // number sholud be start from 2 digit for sequential
                num = num * 10 + j; // number generation
            
            if(num >= low && num <= high){
                result.push_back(num);
             }
            }
        }
        sort(begin(result),end(result)); 
        return result;
        
        
    }
};