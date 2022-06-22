#include <iostream>

using namespace std;

const int MOD = 1000000007;

int main() {
    string str;
    int p = 0, a = 0, t = 0;
    long long result = 0;
    cin >> str;
    for (auto item : str) {
        if (item == 'T')
            t++;
    }
    for (auto item : str) {
        if (item == 'P')
            p++;
        if (item == 'T')
            t--;
        if (item == 'A')
            result += (p * t % MOD);
    }
    cout << result % MOD;
    return 0;
}