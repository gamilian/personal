/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string str = to_string(a * b);
    reverse(str.begin(), str.end());
    cout << stoi(str);
    return 0;
}

