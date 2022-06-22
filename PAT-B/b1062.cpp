#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1) {
        swap(n1, n2);
        swap(m1, m2);
    }
    int cnt = 1;
    bool flag = false;
    while (n1 * k >= m1 * cnt)
        cnt++;
    while (n1 * k < m1 * cnt && m2 * cnt < n2 * k) {
        if (gcd(cnt, k) == 1) {
            printf("%s%d/%d", flag ? " " : "", cnt, k);
            flag = true;
        }
        cnt++;
    }
    return 0;
}
