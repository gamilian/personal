/**
*@Created by gamilian on 2021/6/4.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string str;
        getline(cin, str);
        int flag1 = false;
        int flag2 = false;
        int flag3 = false;
        if (str.length() < 6) {
            cout << "Your password is tai duan le." << endl;
            continue;
        }
        for (auto item:str) {
            if (isdigit(item)) flag1 = true;
            else if (isalpha(item)) flag2 = true;
            else if (item != '.') flag3 = true;
        }
        if (flag3) {
            cout << "Your password is tai luan le." << endl;
            continue;
        }
        if (!flag3 && flag1 && flag2) {
            cout << "Your password is wan mei." << endl;
            continue;
        }
        if (!flag3 && flag1 && !flag2) {
            cout << "Your password needs zi mu." << endl;
            continue;
        }
        if (!flag3 && !flag1 && flag2) {
            cout << "Your password needs shu zi." << endl;
            continue;
        }
    }
    return 0;
}

