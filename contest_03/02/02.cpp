#include <iostream>
#include <string>
#include <stack>

bool isBalanced(const std::string& str) {
    std::stack<char> st;

    for (char ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            
            char top = st.top();
            st.pop();
            
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    std::string str;
    std::getline(std::cin, str, '!');

    bool balanced = isBalanced(str);

    if (balanced) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO"<< std::endl;
    }

    return 0;
}
