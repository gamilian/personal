#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, left_max = 0, cnt = 0;
    int arr[100001];
    bool flag = false;
    scanf("%d", &n);
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] > left_max) {
            if (a[i] == b[i])
                arr[cnt++] = a[i];
            left_max = a[i];
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i) {
        if (flag)
            printf(" ");
        printf("%d", arr[i]);
        flag = true;
    }
    printf("\n");
    return 0;
}