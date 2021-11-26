class Solution {
public:
    bool isValid(string s) {
        stack<char> lst;
        for(int i = 0; i < s.length(); i++){
            if(lst.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
                return false;
            else if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                lst.push(s[i]);
            else if(s[i] == ')' && lst.top() == '(' )
                lst.pop();
            else if(s[i] == '}' && lst.top() == '{')
                lst.pop();
            else if(s[i] == ']' && lst.top() == '[')
                lst.pop();
            else 
                lst.push(s[i]);
 
        }
        return lst.empty();
    }
};