#include <iostream>

using namespace std;

int hashTable[66] = {0};

int main() {
    string str1, str2;
    int result = 0;
    cin >> str1 >> str2;
    for (auto item : str1)
        hashTable[item]++;
    bool flag = true;
    for (auto item : str2) {
        if (--hashTable[item] < 0) {
            flag = false;
            result++;
        }
    }
    if (flag)
        cout << "Yes" << " " << str1.size() - str2.size();
    else
        cout << "No" << " " << result;
    return 0;
}