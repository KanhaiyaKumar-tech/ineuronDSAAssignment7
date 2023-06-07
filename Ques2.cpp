#include <iostream>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num) {
    unordered_map<char, char> mapping{
        {'0', '0'},
        {'1', '1'},
        {'6', '9'},
        {'8', '8'},
        {'9', '6'}
    };

    int left = 0;
    int right = num.length() - 1;

    while (left <= right) {
        char digit = num[left];
        if (mapping.find(digit) == mapping.end() || mapping[digit] != num[right])
            return false;

        left++;
        right--;
    }

    return true;
}

int main() {
    string num;
    cin>>num;

    if (isStrobogrammatic(num))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}

