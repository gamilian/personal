/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x) {
    if (x == 0 || x == 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int l, k;
    string str;
    cin >> l >> k >> str;
    for (int i = 0; i <= l - k; i++) {
        string temp = str.substr(i, k);
        int x = stoi(temp);
        if (is_prime(x)) {
            cout << temp;
            return 0;
        }
    }
    cout << "404";
    return 0;
}

