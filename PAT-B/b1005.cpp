#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool hashTable[10001] = {false};      //3n+1会导致覆盖数超出100

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int k;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        v[i] = n;
        while (n != 1) {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = (3 * n + 1) / 2;
            if (hashTable[n])
                break;
            else
                hashTable[n] = true;
        }
    }
    sort(v.begin(), v.end(), cmp);
    bool flag = false;
    for (auto item : v) {
        if (!hashTable[item]) {
            if (flag)
                cout << " ";
            cout << item;
            flag = true;
        }
    }
    return 0;
}