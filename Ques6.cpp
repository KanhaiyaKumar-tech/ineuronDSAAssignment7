#include <iostream>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length())
        return false;

    string concatenated = s + s;
    return concatenated.find(goal) != string::npos;
}

int main() {
    string s ,goal ;
    cin>>s>>goal;

    if (rotateString(s, goal))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

