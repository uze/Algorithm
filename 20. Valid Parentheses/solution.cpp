class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char symbol : s) {
            if(symbol == '(' || symbol == '[' || symbol == '{')
                stack.push(symbol);
            else {
                if(stack.empty()) return false;
                if(symbol == ')' && stack.top() != '(') return false;
                if(symbol == '}' && stack.top() != '{') return false;
                if(symbol == ']' && stack.top() != '[') return false;
                stack.pop();
            }
        } return stack.empty();
    }
};