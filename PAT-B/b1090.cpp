/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, vector<int> > my_map;
    for (int i = 0; i < n; ++i) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        my_map[temp1].push_back(temp2);
        my_map[temp2].push_back(temp1);
    }
    for (int i = 0; i < m; ++i) {
        int k;
        bool hashTable[100010] = {false}, flag = true;
        cin >> k;
        vector<int> v(k);
        for (int j = 0; j < k; ++j) {
            cin >> v[j];
            hashTable[v[j]] = true;
        }
        for (int j = 0; j < k; ++j) {
            for (auto item:my_map[v[j]])
                if (hashTable[item]) flag = false;
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}

