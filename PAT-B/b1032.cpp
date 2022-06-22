#include <iostream>

using namespace std;
const int maxn = 100010;
int school[maxn] = {0};

int main(int argc, char const *argv[]) {
    int N, id, score;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> id >> score;
        school[id] += score;
    }
    int k = 1, max = -1;
    for (int i = 0; i <= N; i++) {
        if (school[i] > max) {
            max = school[i];
            k = i;
        }
    }
    cout << k << ' ' << max;
    return 0;
}