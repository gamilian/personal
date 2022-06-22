/**
*@Created by gamilian on 2021/6/2.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, v[i]);
        int pos = v[i].find('T') - 2;
        cout << (v[i][pos] - 'A') + 1;
    }
    return 0;
}

