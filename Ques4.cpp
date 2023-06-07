#include <iostream>
#include <sstream>
#include<algorithm>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    string result;

    while (ss >> word) {
        std::reverse(word.begin(), word.end());
        result += word + " ";
    }

    // Remove the trailing whitespace
    if (!result.empty())
        result.pop_back();

    return result;
}

int main() {
    string s ;
    getline(cin, s);

    cout << reverseWords(s) << endl;

    return 0;
}

