class Solution {
public:
    string removeOuterParentheses(string s) {
        string result ="";
        int balance = 0;

        for(char c : s){
            if(c =='('){
                if(balance >0){
                    result = result + c;
                }
                balance++;
            }
            else{ //agar ) closing bracket aayega toh balance ghate ke check
                balance--;
                if(balance >0){
                    result = result + c;
                }

            }
        }
        return result;
        
    }
};