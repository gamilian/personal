/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> res, hashTable(n + 1, 1);
            hashTable[i] = hashTable[j] = -1;
            for (int k = 1; k <= n; k++)
                if (v[k] * hashTable[abs(v[k])] < 0) res.push_back(k);
            if (res.size() == 2 && hashTable[res[0]] + hashTable[res[1]] == 0) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No Solution";
    return 0;
}

