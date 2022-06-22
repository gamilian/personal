/**
*@Created by gamilian on 2021/6/4.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int max_num, min_num, max_dis = -1, min_dis = 99999;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int dis = b * b + c * c;
        if (dis > max_dis) {
            max_dis = dis;
            max_num = a;
        }
        if (dis < min_dis) {
            min_dis = dis;
            min_num = a;
        }
    }
    cout.fill('0');
    cout << setw(4) << min_num << " " << setw(4) << max_num;
    return 0;
}

