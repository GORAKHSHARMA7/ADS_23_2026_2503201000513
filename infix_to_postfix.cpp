#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

// Function to return precedence of operators
int getPrecedence(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string postfix = "";

    for (char ch : s)
    {
        if (isalnum(ch))
            postfix += ch;

        else if (ch == '(')
            st.push(ch);

        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop(); // Remove '('
        }

        else
        {
            while (!st.empty() && getPrecedence(st.top()) >= getPrecedence(ch))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Postfix Expression: " << infixToPostfix(infix);

    return 0;
}