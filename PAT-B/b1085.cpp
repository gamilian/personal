/**
*@Created by gamilian on 2021/6/7.
*/

#include <bits/stdc++.h>

using namespace std;

struct School {
    string num;
    int score;
    int cnt;
};

bool cmp(School a, School b) {
    if (a.score != b.score)
        return a.score > b.score;
    else if (a.cnt != b.cnt)
        return a.cnt < b.cnt;
    else
        return a.num < b.num;
}

int main() {
    int n;
    cin >> n;
    map<string, int> cnt_map;
    map<string, double> score_map;
    for (int i = 0; i < n; ++i) {
        string num;
        string sch;
        double score;
        cin >> num >> score >> sch;
        if (num[0] == 'B') score /= 1.5;
        if (num[0] == 'T') score *= 1.5;
        transform(sch.begin(), sch.end(), sch.begin(), ::tolower);
        cnt_map[sch]++;
        score_map[sch] += score;
    }
    vector<School> res;
    for (const auto &item:cnt_map)
        res.push_back(School{item.first, static_cast<int>(score_map[item.first]), item.second});
    sort(res.begin(), res.end(), cmp);
    cout << cnt_map.size() << endl;
    int count = 0, pre_score = -1;
    for (int i = 0; i < res.size(); i++) {
        if (res[i].score != pre_score) {
            pre_score = res[i].score;
            count = i + 1;
        }
        cout << count << ' ' << res[i].num << ' ' << res[i].score << ' ' << res[i].cnt << endl;
    }
    return 0;
}

