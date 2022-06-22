#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n, m, perfect = 0;
    cin >> n >> m;
    vector<vector<int> > v1(m, vector<int>(3));
    vector<vector<char> > v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v1[i][0] >> v1[i][1] >> v1[i][2];
        perfect += v1[i][0];
        v2[i].reserve(v1[i][2]);
        for (int j = 0; j < v1[i][2]; ++j)
            cin >> v2[i][j];
    }
    vector<int> res1(n);
    vector<int> res2(m);
    for (int i = 0; i < n; ++i) {
        vector<int> num(m);
        for (int j = 0; j < m; ++j) {
            bool flag_plus = true;
            string str1;
            cin >> str1;
            stringstream temp(str1.substr(1));
            temp >> num[j];
            if (num[j] == 0) {
                string s;
                cin >> s;
                flag_plus = false;
            }
            if (num[j] != v1[j][2])
                flag_plus = false;
            for (int k = 0; k < num[j]; ++k) {
                vector<char> ch(num[j]);
                string str_end;
                if (k != num[j] - 1)
                    cin >> ch[k];
                else {
                    cin >> str_end;
                    stringstream str_convert(str_end.substr(0, str_end.length() - 1));
                    str_convert >> ch[k];
                }
                if (ch[k] != v2[j][k])
                    flag_plus = false;
            }
            if (flag_plus)
                res1[i] += v1[j][0];
            else
                res2[j]++;
        }
    }
    bool flag_cout = true;
    for (auto item:res1)
        if (item != perfect)
            flag_cout = false;
    for (int i = 0; i < n; ++i)
        cout << res1[i] << endl;
    int max = 0;
    for (int i = 0; i < m; ++i)
        if (res2[i] > max)
            max = res2[i];
    if (flag_cout)
        cout << "Too simple";
    else {
        cout << max;
        for (int i = 0; i < m; ++i)
            if (res2[i] == max)
                cout << ' ' << i + 1;
    }
    return 0;
}