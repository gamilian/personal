/**
*@Created by gamilian on 2021/5/31.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    sum = v[0];
    for (int i = 1; i < n; ++i)
        sum = (sum + v[i]) / 2;
    cout << sum;
    return 0;
}

