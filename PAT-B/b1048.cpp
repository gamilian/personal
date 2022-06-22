#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str1, str2, result;
    cin >> str1 >> str2;
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int len1 = str1.length(), len2 = str2.length();
    if (len1 > len2)
        str2.append(len1 - len2, '0');
    else
        str1.append(len2 - len1, '0');
    char str[14] = {"0123456789JQK"};
    for (int i = 0; i < max(len1, len2); ++i) {
        if (i % 2 == 0)
            result += str[(str1[i] - '0' + str2[i] - '0') % 13];
        else {
            int temp = str2[i] - str1[i];
            if (temp < 0) temp = temp + 10;
            result += str[temp];
        }
    }
    for (int i = max(len1, len2) - 1; i >= 0; i--) {
        cout << result[i];
    }
    return 0;
}