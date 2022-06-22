/**
*@Created by gamilian on 2021/6/1.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, input1, input2, res;
    cin >> str >> input1 >> input2;
    res = str;
    string str1(str.length() - input1.length(), '0');
    input1 = str1 + input1;
    string str2(str.length() - input2.length(), '0');
    input2 = str2 + input2;
    int cnt = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        int mod = str[i] == '0' ? 10 : (str[i] - '0');
        res[i] = (input1[i] - '0' + input2[i] - '0' + cnt) % mod + '0';
        cnt = (input1[i] - '0' + input2[i] - '0' + cnt) / mod;
    }
    if (cnt != 0) res = '1' + res;
    bool flag = false;
    for (auto item:res) {
        if (item != '0' || flag) {
            cout << item;
            flag = true;
        }
    }
    if (!flag) cout << '0';
    return 0;
}

