/**
*@Created by gamilian on 2021/5/28.
*/

#include <bits/stdc++.h>

using namespace std;
int n, m, tol;
vector<vector<int>> v;
int dir[8][2] = {{-1, -1},
                 {-1, 0},
                 {-1, 1},
                 {0,  1},
                 {1,  1},
                 {1,  0},
                 {1,  -1},
                 {0,  -1}};

bool is_valid(int x, int y) {
    for (auto item : dir) {
        int temp_x = x + item[0];
        int temp_y = y + item[1];
        if (temp_x >= 0 && temp_x < n && temp_y >= 0 && temp_y < m && abs(v[x][y] - v[temp_x][temp_y]) <= tol)
            return false;
    }
    return true;
}

int main() {
    int cnt = 0, x = 0, y = 0;
    cin >> m >> n >> tol;
    v.resize(n, vector<int>(m));
    map<int, int> mapp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            mapp[v[i][j]]++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mapp[v[i][j]] == 1 && is_valid(i, j)) {
                cnt++;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    if (cnt == 1)
        cout << '(' << y << ", " << x << "): " << v[x - 1][y - 1];
    else if (cnt == 0)
        cout << "Not Exist";
    else
        cout << "Not Unique";
    return 0;
}

