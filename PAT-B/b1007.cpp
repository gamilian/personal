#include <iostream>

using namespace std;

bool is_prime(int x) {
    if (x == 0 | x == 1) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 5; i <= n; i++)
        if (is_prime(i) && is_prime(i - 2)) cnt++;
    cout << cnt;
    return 0;
}