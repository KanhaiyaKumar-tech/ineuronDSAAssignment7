#include <iostream>
#include <stack>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char> stack_s, stack_t;

    // Build the modified strings for s and t
    for (char c : s) {
        if (c != '#')
            stack_s.push(c);
        else if (!stack_s.empty())
            stack_s.pop();
    }

    for (char c : t) {
        if (c != '#')
            stack_t.push(c);
        else if (!stack_t.empty())
            stack_t.pop();
    }

    // Compare the modified strings
    while (!stack_s.empty() && !stack_t.empty()) {
        if (stack_s.top() != stack_t.top())
            return false;
        stack_s.pop();
        stack_t.pop();
    }

    return stack_s.empty() && stack_t.empty();
}

int main() {
    string s ,t ;

    cin>>s>>t;
    if (backspaceCompare(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

