#include <iostream>

using namespace std;

int main() {
    string str_input;
    int sum = 0;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> str_input;
    for (int i = 0; i < str_input.length(); ++i) {
        sum += int(str_input[i] - '0');
    }
    string str_sum = to_string(sum);
    for (int i = 0; i < str_sum.length(); ++i) {
        if (i != 0)
            cout << " ";
        cout << str[str_sum[i] - '0'];
    }
    return 0;
}

