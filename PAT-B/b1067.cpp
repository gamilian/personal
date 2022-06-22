/**
*@Created by gamilian on 2021/5/27.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int n, cnt = 0;
    cin >> str >> n;
    cin.ignore();
    bool flag = true;
    while (true) {
        string temp;
        getline(cin, temp);
        cnt++;
        if (temp == "#") break;
        if (cnt <= n && flag) {
            if (temp == str) {
                cout << "Welcome in" << endl;
                flag = false;
            } else {
                cout << "Wrong password: " << temp << endl;
                if (cnt == n) {
                    cout << "Account locked" << endl;
                    flag = false;
                }
            }
        }
    }

    return 0;
}

