#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str;
    int n;
    getline(cin, str);
    for (auto item:str) {
        if (isalpha(item))
            n += (tolower(item) - 'a' + 1);
    }
    int cnt0 = 0, cnt1 = 0;
    while (n != 0) {
        if (n % 2 == 0) {
            cnt0++;
        } else {
            cnt1++;
        }
        n = n / 2;
    }
    cout << cnt0 << ' ' << cnt1;
    return 0;
}