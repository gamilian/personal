/**
*@Created by gamilian on 2021/5/28.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, s;
    cin >> m >> n >> s;
    map<string, int> mapp;
    bool flag = false;
    for (int i = 0; i < m; ++i) {
        string temp;
        cin >> temp;
        if (mapp[temp] == 1) s = s + 1;
        if (i + 1 == s && mapp[temp] == 0) {
            mapp[temp] = 1;
            cout << temp << endl;
            flag = true;
            s = s + n;
        }
    }
    if (!flag) cout << "Keep going...";
    return 0;
}

