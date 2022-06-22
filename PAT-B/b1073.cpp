/**
*@Created by gamilian on 2021/5/31.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > v1(m, vector<int>(3));
    vector<vector<char> > v2(m);
    for (int i = 0; i < m; ++i) {
        cin >> v1[i][0] >> v1[i][1] >> v1[i][2];
        v2[i].reserve(v1[i][2]);
        for (int j = 0; j < v1[i][2]; ++j)
            cin >> v2[i][j];
    }
    vector<double> res1(n);
    int res2[100][5] = {0};
    for (int i = 0; i < n; ++i) {
        vector<int> num(m);
        for (int j = 0; j < m; ++j) {
            int flag_plus = 2;
            string str1;
            cin >> str1;
            stringstream temp(str1.substr(1));
            temp >> num[j];
            if (num[j] == 0) {
                string s;
                cin >> s;
                flag_plus = 0;
            }
            if (num[j] > v1[j][2])
                flag_plus = 0;
            bool hashTable1[5] = {false};
            for (int k = 0; k < v1[j][2]; ++k)
                hashTable1[v2[j][k] - 'a'] = true;
            bool hashTable2[5] = {false};
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
                hashTable2[ch[k] - 'a'] = true;
                if (!hashTable1[ch[k] - 'a']) {
                    res2[j][ch[k] - 'a']++;
                    flag_plus = 0;
                }
            }
            for (int k = 0; k < v1[j][2]; ++k)
                if (!hashTable2[v2[j][k] - 'a'])
                    res2[j][v2[j][k] - 'a']++;
            if (num[j] < v1[j][2] && flag_plus == 2) flag_plus = 1;
            if (flag_plus == 2) {
                res1[i] += v1[j][0];
            } else if (flag_plus == 1) {
                res1[i] += v1[j][0] / 2.0;
            }
        }
    }
    for (auto item:res1) {
        cout.setf(ios::fixed);
        cout << fixed << setprecision(1) << item << endl;
    }
    int max = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < 5; j++)
            if (max < res2[i][j])
                max = res2[i][j];
    if (max == 0) {
        cout << "Too simple" << endl;
    } else {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < 5; j++)
                if (res2[i][j] == max) {
                    cout << max << ' ' << i + 1 << '-';
                    cout.put(j + 'a');
                    cout << endl;
                }
    }
    return 0;
}

