#include <iostream>
#include <cmath>

using namespace std;
long long a, b, c, d;

long long gcd(long long x, long long y) {
    return y == 0 ? x : gcd(y, x % y);
}

void func(long long m, long long n) {
    if (m * n == 0) {
        printf("%s", n == 0 ? "Inf" : "0");
        return;
    }
    bool flag = ((m < 0 && n > 0) || (m > 0 && n < 0));
    m = abs(m);
    n = abs(n);
    long long x = m / n;
    printf("%s", flag ? "(-" : "");
    if (x != 0) printf("%lld", x);
    if (m % n == 0) {
        if (flag) printf(")");
        return;
    }
    if (x != 0) printf(" ");
    m %= n;
    long long t = gcd(m, n);
    m /= t;
    n /= t;
    printf("%lld/%lld%s", m, n, flag ? ")" : "");
}

int main() {
    scanf("%lld/%lld %lld/%lld", &a, &b, &c, &d);
    func(a, b);
    printf(" + ");
    func(c, d);
    printf(" = ");
    func(a * d + b * c, b * d);
    printf("\n");
    func(a, b);
    printf(" - ");
    func(c, d);
    printf(" = ");
    func(a * d - b * c, b * d);
    printf("\n");
    func(a, b);
    printf(" * ");
    func(c, d);
    printf(" = ");
    func(a * c, b * d);
    printf("\n");
    func(a, b);
    printf(" / ");
    func(c, d);
    printf(" = ");
    func(a * d, b * c);
    return 0;
}