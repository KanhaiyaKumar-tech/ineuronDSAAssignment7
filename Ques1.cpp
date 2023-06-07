
#include <iostream>
#include <unordered_map>
using namespace std;

bool isomorphicStrings(string s, string t) {
    if (s.length() != t.length())
        return false;

    unordered_map<char, char> mapping_s;
    unordered_map<char, char> mapping_t;

    for (int i = 0; i < s.length(); i++) {
        char char_s = s[i];
        char char_t = t[i];

        if (mapping_s.find(char_s) != mapping_s.end()) {
            if (mapping_s[char_s] != char_t)
                return false;
        } else {
            mapping_s[char_s] = char_t;
        }

        if (mapping_t.find(char_t) != mapping_t.end()) {
            if (mapping_t[char_t] != char_s)
                return false;
        } else {
            mapping_t[char_t] = char_s;
        }
    }

    return true;
}

int main() {
    string s ,t;
    cin>>s>>t;

    if (isomorphicStrings(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
