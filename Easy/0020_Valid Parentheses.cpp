class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(auto i:s){
            if(i=='(' || i=='{' ||i=='[')
            ch.push(i);
            else{
                if(ch.empty() or (ch.top()=='(' and i!=')') or (ch.top()=='{' and i!='}') or (ch.top()=='[' and i!=']'))
                return false;
                ch.pop();
            }
        }
        return ch.empty();
    }
};