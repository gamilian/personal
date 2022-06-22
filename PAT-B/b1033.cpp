#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str2.length(); i++) {
        if (str1.find(toupper(str2[i])) != string::npos) continue;
        if (isupper(str2[i]) && str1.find('+') != string::npos) continue;
        cout << str2[i];
    }
    return 0;
}