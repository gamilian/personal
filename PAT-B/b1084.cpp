/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    int k;
    string str = to_string(d);
    for (int i = 1; i < n; ++i) {
        string temp;
        for (int j = 0; j < str.length(); j = k) {
            for (k = j; k < str.length() && str[j] == str[k]; k++);
            temp += str[j] + to_string(k - j);
        }
        str = temp;
    }
    cout << str;
    return 0;
}

