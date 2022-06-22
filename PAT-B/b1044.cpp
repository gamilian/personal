#include <iostream>

using namespace std;
string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {" ", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void print_num(int num) {
    if (num / 13) cout << b[num / 13];
    if ((num / 13) && (num % 13)) cout << " ";
    if (num % 13 || num == 0) cout << a[num % 13];
}

void print_str(string str) {
    int t1 = 0, t2 = 0;
    string s1 = str.substr(0, 3), s2;
    if (str.length() > 4) s2 = str.substr(4, 3);
    for (int j = 1; j <= 12; j++) {
        if (s1 == a[j] || s2 == a[j]) t2 = j;
        if (s1 == b[j]) t1 = j;
    }
    cout << t1 * 13 + t2;
}

int main() {
    int n;
    string str;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str[0] >= '0' && str[0] <= '9')
            print_num(stoi(str));
        else
            print_str(str);
        cout << endl;
    }
    return 0;
}