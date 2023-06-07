
#include <iostream>
#include <algorithm>
using namespace std;

string addStrings(string num1, string num2) {
    string result;
    int carry = 0;
    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        // Compute the sum of the digits and the carry
        int digitSum = digit1 + digit2 + carry;
        carry = digitSum / 10;
        digitSum %= 10;

        // Prepend the resulting digit to the result string
        result.push_back(digitSum + '0');

        // Move to the next digits
        i--;
        j--;
    }

    // Reverse the result string to get the correct order
    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string num1  ,num2 ;
    cin>>num1>>num2;

    cout << addStrings(num1, num2) << endl;

    return 0;
}
