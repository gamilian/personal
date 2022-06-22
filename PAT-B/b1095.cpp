/**
*@Created by gamilian on 2021/6/8.
*/

#include <bits/stdc++.h>

using namespace std;

struct Student {
    string num;
    int score;
};

bool cmp(Student a, Student b) {
    return a.score != b.score ? a.score > b.score : a.num < b.num;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<Student> stu(n);
    int hashTable[1000010][10010] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].num >> stu[i].score;
    }
    for (int i = 0; i < m; ++i) {
        int type;
        string str;
        cin >> type >> str;
        printf("Case %d: %d %s\n", i + 1, type, str.c_str());
        vector<Student> res;
        int cnt = 0, sum = 0;
        if (type == 1) {
            for (int j = 0; j < n; ++j) {
                if (stu[j].num[0] == str[0]) res.push_back(stu[j]);
            }
        } else if (type == 2) {
            for (int j = 0; j < n; ++j) {
                if (stu[j].num.substr(1, 3) == str) {
                    cnt++;
                    sum += stu[j].score;
                }
            }
            if (cnt != 0) cout << cnt << ' ' << sum << endl;
        } else if (type == 3) {
            unordered_map<string, int> my_map;
            for (int j = 0; j < n; j++)
                if (stu[j].num.substr(4, 6) == str) my_map[stu[j].num.substr(1, 3)]++;
            for (auto item : my_map)
                res.push_back({item.first, item.second});
        }
        sort(res.begin(), res.end(), cmp);
        for (auto &re : res)
            printf("%s %d\n", re.num.c_str(), re.score);
        if (((type == 1 || type == 3) && res.size() == 0) || (type == 2 && cnt == 0)) printf("NA\n");
    }
    return 0;
}

