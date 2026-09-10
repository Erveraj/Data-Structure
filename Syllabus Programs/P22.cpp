// Program No. 22: Program for converting infix to postfix form

#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main()
{
    string infix, postfix = "";

    stack<char> s;

    cout << "Enter infix expression: ";
    cin >> infix;

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        // Operand
        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9'))
        {
            postfix += ch;
        }

        // Opening bracket
        else if (ch == '(')
        {
            s.push(ch);
        }

        // Closing bracket
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
                s.pop();
        }

        // Operator
        else
        {
            while (!s.empty() &&
                   priority(s.top()) >= priority(ch))
            {
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix expression = " << postfix;

    return 0;
}