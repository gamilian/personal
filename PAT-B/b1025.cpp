#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int first, n, k;
    cin >> first >> n >> k;
    int temp, data[100015], next[100015];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int count = 0, list[100015];
    while (first != -1) {
        list[count++] = first;
        first = next[first];
    }
    for (int i = 0; i < (count - count % k); i += k)
        reverse(begin(list) + i, begin(list) + i + k);
    for (int i = 0; i < count - 1; i++)
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    printf("%05d %d -1", list[count - 1], data[list[count - 1]]);
    return 0;
}