/**
*@Created by gamilian on 2021/6/2.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    char ch;
    string str, temp;
    cin >> ch;
    cin.ignore();
    getline(cin, str);
    char pre = str[0];
    int cnt = 1;
    for (int i = 0; i < str.length(); i++) {
        if (ch == 'C') {
            if (i == 0) continue;
            if (str[i] == pre) {
                cnt++;
            } else {
                if (cnt > 1) cout << cnt;
                cout << pre;
                pre = str[i];
                cnt = 1;
            }
        }
        if (ch == 'D') {
            if (isdigit(str[i])) {
                temp += str[i];
            } else {
                if (temp.length() > 0) cnt = stoi(temp);
                while (cnt--) cout << str[i];
                cnt = 1;
                temp = "";
            }
        }
    }
    if (ch == 'C') {
        if (cnt > 1) cout << cnt;
        cout << pre;
    }

    return 0;
}