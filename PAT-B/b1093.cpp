/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    bool hashTable[129] = {false};
    string str = str1 + str2;
    for (char i : str) {
        if (!hashTable[i - 32]) cout << i;
        hashTable[i - 32] = true;
    }
    return 0;
}

