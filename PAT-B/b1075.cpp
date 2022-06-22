/**
*@Created by gamilian on 2021/6/2.
*/

#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    int next;
} node[100010];

int main() {
    int first, n, k;
    vector<int> v[3];
    cin >> first >> n >> k;
    for (int i = 0; i < n; ++i) {
        int address;
        cin >> address;
        cin >> node[address].data >> node[address].next;
    }
    while (first != -1) {
        int data = node[first].data;
        if (data < 0)
            v[0].push_back(first);
        else if (data <= k)
            v[1].push_back(first);
        else
            v[2].push_back(first);
        first = node[first].next;
    }
    cout.fill('0');
    bool flag = true;
    for (const auto &items:v) {
        for (auto item:items) {
            if (flag) {
                cout << setw(5) << item << ' ' << node[item].data << ' ';
                flag = false;
            } else
                cout << setw(5) << item << endl << setw(5) << item << ' ' << node[item].data << ' ';
        }
    }
    cout << -1;
    return 0;
}

