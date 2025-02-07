//15. How do you evaluate the validity of a string of parentheses using a stack?


#include <bits/stdc++.h>
using namespace std;

bool isPair(char first, char last) {
    return (first == '(' && last == ')') || (first == '[' && last == ']') || (first == '{' && last == '}');
}

bool isValid(string s) {
    if(s.length() == 1) {
        return false;
    }
    stack<char> st;
    for(char cur:s) {
        if(!st.empty()) {
            char front = st.top();
            if(isPair(front, cur)) {
                st.pop();
                continue;
            }
        }
        st.push(cur);
    }
    return st.empty();
}


int main() {
    string s = "()";
    cout<<isValid(s)<<endl;
}
