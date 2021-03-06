#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<string> > v;
    for (int i = 0; i < 3; ++i) {
        string str;
        getline(cin, str);
        vector<string> temp;
        int j = 0, k = 0;
        while (j < str.length()) {
            if (str[j++] == '[') {
                while (k++ < str.length()) {
                    if (str[k] == ']') {
                        temp.push_back(str.substr(j, k - j));
                        break;
                    }
                }
            }
        }
        v.push_back(temp);
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if (a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 ||
            b < 1 || c < 1 || d < 1 || e < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        } else {
            cout << v[0][a - 1] << '(' << v[1][b - 1] << v[2][c - 1] << v[1][d - 1] << ')' << v[0][e - 1] << endl;
        }
    }
    return 0;
}