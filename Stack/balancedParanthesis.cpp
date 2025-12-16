class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int size = s.size();
        stack<char> st;
        
        for(int i=0 ; i<size ; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
                if(st.empty())  return false;
                char top = st.top();
                if ((s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top != '[') ||
                    (s[i] == '}' && top != '{')) {
                    return false; 
                }
                st.pop();
            }
            
        }
        return st.empty();
    }
};