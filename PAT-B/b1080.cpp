/**
*@Created by gamilian on 2021/6/4.
*/

#include <bits/stdc++.h>

using namespace std;


struct node {
    string name;
    int gp, gm, gf, g;
};

bool cmp(node a, node b) {
    return a.g != b.g ? a.g > b.g : a.name < b.name;
}

int main() {
    int p, m, n;
    cin >> p >> m >> n;
    map<string, int> my_map;
    vector<node> v(p + 1);
    vector<node> res;
    for (int i = 0; i < p; ++i) {
        string num;
        int score;
        cin >> num >> score;
        if (score >= 200) {
            my_map[num] = i + 1;
            node temp = node{num, score, -1, -1, -1};
            v[i] = temp;
        }
    }
    for (int i = 0; i < m; ++i) {
        string num;
        int score;
        cin >> num >> score;
        if (my_map[num] != 0)
            v[my_map[num] - 1].gm = score;
    }
    for (int i = 0; i < n; ++i) {
        string num;
        int score;
        cin >> num >> score;
        if (my_map[num] != 0)
            v[my_map[num] - 1].gf = score;
    }
    for (auto const &item:v) {
        int temp = item.gm > item.gf ? static_cast<int>(item.gm * 0.4 + item.gf * 0.6 + 0.5) : item.gf;
        if (temp >= 60)
            res.push_back(node{item.name, item.gp, item.gm, item.gf, temp});
    }
    sort(res.begin(), res.end(), cmp);
    for (const auto &item:res) {
        cout << item.name << ' ' << item.gp << ' ' << item.gm << ' ' << item.gf << ' ' << item.g << endl;
    }
    return 0;
}

