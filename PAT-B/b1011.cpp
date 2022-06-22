#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int a, b, c;
        cin >> a >> b >> c;
        cout << "Case #" << i + 1 << ": " << (a + b > c ? "true" : "false") << endl;
    }
    return 0;
}