#include <iostream>

using namespace std;

int hashTable[101] = {0};

int main() {
    int n, k, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        hashTable[arr[i]]++;
    }
    cin >> k;
    bool flag = false;
    for (int i = 0; i < k; ++i) {
        cin >> x;
        if (flag)
            cout << " ";
        cout << hashTable[x];
        flag = true;
    }
    return 0;
}