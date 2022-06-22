#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int x) {
    if (x == 0 || x == 1) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int M, N, count = 0, num = 2;
    cin >> M >> N;
    vector<int> v;
    while (count < N) {
        if (is_prime(num)) {
            count++;
            if (count >= M) v.push_back(num);
        }
        num++;
    }
    count = 0;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        count++;
        if (count % 10 != 0 && i < v.size() - 1) cout << " ";
        else cout << endl;
    }
    return 0;
}