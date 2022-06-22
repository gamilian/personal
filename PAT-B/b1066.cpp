/**
*@Created by gamilian on 2021/5/27.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, a, b, replace;
    scanf("%d%d%d%d%d", &m, &n, &a, &b, &replace);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int temp;
            scanf("%d", &temp);
            if (temp >= a && temp <= b) temp = replace;
            printf("%03d", temp);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}

