#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end(), cmp);
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (v[i] <= i + 1) {
            cout << i;
            flag = false;
            break;
        }
    }
    if (flag)
        cout << n;
    return 0;
}