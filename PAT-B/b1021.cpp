#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int hashTable[10] = {0};
    for (char item : s)
        hashTable[item - '0']++;
    for (int i = 0; i < 10; i++) {
        if (hashTable[i] > 0) cout << i << ':' << hashTable[i] << endl;
    }
    return 0;
}