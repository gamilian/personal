#include <iostream>

using namespace std;

int hashTable[100] = {0};

int main() {
    string str;
    int max_count = 0;
    char max_ch;
    getline(cin, str);
    for (auto &item : str)
        item = tolower(item);
    for (auto item : str) {
        if (islower(item))
            hashTable[item]++;
        if (max_count < hashTable[item] || (max_count == hashTable[item] && max_ch > item)) {
            max_count = hashTable[item];
            max_ch = item;
        }
    }
    cout << max_ch << " " << max_count;
    return 0;
}