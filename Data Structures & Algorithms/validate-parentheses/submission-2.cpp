class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i =0;i<s.length();i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
            }else if(s[i] == ']' || s[i] == '}'){
                if(st.empty()) return false;
                char c = st.top();
                st.pop();
                if(c != s[i] - 2){
                    return false;
                }
            }else if(s[i] == ')'){
                if(st.empty()) return false;
                char c = st.top();
                st.pop();
                if(c != s[i] - 1){
                    return false;
                }
            }
        }
        return st.empty();
    }
    
};
