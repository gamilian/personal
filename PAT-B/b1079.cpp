/**
*@Created by gamilian on 2021/6/4.
*/

#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string str) {
    string temp = str;
    reverse(str.begin(), str.end());
    return temp == str;
}

string add_string(string str1, string str2) {
    int temp;
    int flag = false;
    string str = "";
    for (int i = str1.length() - 1; i >= 0; i--) {
        if (flag)
            temp = str1[i] - '0' + str2[i] - '0' + 1;
        else
            temp = str1[i] - '0' + str2[i] - '0';
        if (temp >= 10) {
            flag = true;
            temp -= 10;
        } else flag = false;
        str = to_string(temp) + str;
    }
    if (flag)
        str = "1" + str;
    return str;
}

int main() {
    string str;
    int cnt = 0;
    cin >> str;
    while (!is_palindrome(str) && cnt < 10) {
        string temp1 = str;
        reverse(str.begin(), str.end());
        string temp2 = str;
        str = add_string(temp1, temp2);
        cout << temp1 << " + " << temp2 << " = " << str << endl;
        cnt++;
    }
    if (cnt < 10)
        cout << str << " is a palindromic number.";
    else
        cout << "Not found in 10 iterations.";
    return 0;
}

