/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> my_set;
    for (int i = 1; i <= n; ++i) {
        my_set.insert(i / 2 + i / 3 + i / 5);
    }
    cout << my_set.size();
    return 0;
}

