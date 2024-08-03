class Solution {
    public boolean isValid(String s) {
    Stack<Character> st = new Stack<>();
    for (int i = 0; i < s.length(); i++) {
        char x =s.charAt(i); 
        if(x=='{' || x=='(' || x=='[')
            st.push(x);
        else{
            if(st.isEmpty())
                return false;
            char y = st.peek();
            if(y== '(' && x!=')')
                return false;
            if(y=='{' && x!= '}')
                return false;
            if(y== '[' && x!=']')
                return false;
            st.pop();
        }
           
    }
    if(st.isEmpty())
        return true;
    return false; 
}}