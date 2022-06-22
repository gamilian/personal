/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res[10010] = {0};
    for (int i = 1; i <= n; ++i) {
        int temp;
        cin >> temp;
        res[abs(temp - i)]++;
    }
    for (int i = 10009; i >= 0; i--)
        if (res[i] > 1) cout << i << ' ' << res[i] << endl;
    return 0;
}

