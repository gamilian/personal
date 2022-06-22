/**
*@Created by gamilian on 2021/5/31.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool hashTable[10010] = {false};
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        hashTable[temp] = true;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        string str;
        int num;
        cin >> str >> num;
        bool flag = true;
        for (int j = 0; j < num; ++j) {
            int temp;
            cin >> temp;
            if (hashTable[temp]) {
                cout.fill('0');
                if (flag) {
                    cout << str << ": " << setw(4) << temp;
                    flag = false;
                    cnt2++;
                } else {
                    cout << " " << setw(4) << temp;
                    cnt2++;
                }
            }
        }
        if (!flag) {
            cout << endl;
            cnt1++;
        }
    }
    cout << cnt1 << ' ' << cnt2;
    return 0;
}

