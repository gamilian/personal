#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, m, x; //m * x but m > x
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &v[i]);
    sort(v.begin(), v.end(), cmp);
    for (x = sqrt(double(n)); x >= 1; x--) {
        if (n % x == 0) {
            m = n / x;
            break;
        }
    }
    vector<vector<int> > b(m, vector<int>(x));
    int layer = m / 2 + m % 2, cnt = 0;
    for (int i = 0; i < layer; i++) {
        for (int j = i; j <= x - 1 - i && cnt < n; j++)
            b[i][j] = v[cnt++];
        for (int j = i + 1; j <= m - 2 - i && cnt < n; j++)
            b[j][x - 1 - i] = v[cnt++];
        for (int j = x - i - 1; j >= i && cnt < n; j--)
            b[m - 1 - i][j] = v[cnt++];
        for (int j = m - 2 - i; j >= i + 1 && cnt < n; j--)
            b[j][i] = v[cnt++];
    }
    for (auto vec : b) {
        for (int i = 0; i < x; i++) {
            printf("%d", vec[i]);
            if (i != x - 1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}