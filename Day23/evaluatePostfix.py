class Solution:
    
    #Function to evaluate a postfix expression.
    def evaluatePostfix(self, S):
        # Code here
        st = []
        for i in S:
            if i.isnumeric():
                st.append(int(i))
            else:
                s = st.pop()
                f = st.pop()
                if i == '+':
                    st.append(f + s)
                elif i == '-':
                    st.append(f - s)
                elif i == '/':
                    st.append(f // s)
                elif i == '*':
                    st.append(f * s)
        return st.pop()
