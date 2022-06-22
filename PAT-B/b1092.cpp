/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int temp;
            cin >> temp;
            v[j] += temp;
        }
    }
    int max = -1;
    for (auto item:v) {
        if (item > max) max = item;
    }
    cout << max << endl;
    bool flag = false;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == max) {
            if (flag) cout << ' ';
            cout << i + 1;
            flag = true;
        }
    }
    return 0;
}

