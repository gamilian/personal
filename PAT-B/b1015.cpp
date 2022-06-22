#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student {
    int num;
    int score_de;
    int score_cai;
};

bool cmp(struct student a, struct student b) {
    if ((a.score_de + a.score_cai) != (b.score_de + b.score_cai))
        return (a.score_de + a.score_cai) > (b.score_de + b.score_cai);
    else if (a.score_de != b.score_de)
        return a.score_de > b.score_de;
    else
        return a.num < b.num;
}

int main() {
    int N, L, H;
    cin >> N >> L >> H;
    vector<student> v[4];
    student temp;
    int count = N;
    for (int i = 0; i < N; i++) {
        scanf("%d%d%d", &temp.num, &temp.score_de, &temp.score_cai);
        if (temp.score_de < L || temp.score_cai < L) count--;
        else if (temp.score_cai >= H && temp.score_de >= H) v[0].push_back(temp);
        else if (temp.score_de >= H && temp.score_cai < H) v[1].push_back(temp);
        else if (temp.score_de < H && temp.score_cai < H && temp.score_de >= temp.score_cai) v[2].push_back(temp);
        else v[3].push_back(temp);
    }
    cout << count << endl;
    for (int i = 0; i < 4; ++i) {
        sort(v[i].begin(), v[i].end(), cmp);
        for (int j = 0; j < v[i].size(); ++j)
            cout << v[i][j].num << " " << v[i][j].score_de << " " << v[i][j].score_cai << endl;
    }
    return 0;
}