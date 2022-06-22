#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int height;
};

bool cmp(Person a, Person b) {
    return a.height != b.height ? a.height > b.height : a.name < b.name;
}

int main() {
    int n, k, m;
    cin >> n >> k;
    vector<Person> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i].name >> v[i].height;
    sort(v.begin(), v.end(), cmp);
    int t = 0, row = k;
    while (row) {
        if (row == k)
            m = n - n / k * (k - 1);
        else
            m = n / k;
        vector<string> res(m);
        res[m / 2] = v[t].name;
        int j = m / 2 - 1;
        for (int i = t + 1; i < t + m; i = i + 2)
            res[j--] = v[i].name;
        j = m / 2 + 1;
        for (int i = t + 2; i < t + m; i = i + 2)
            res[j++] = v[i].name;
        cout << res[0];
        for (int i = 1; i < m; i++)
            cout << " " << res[i];
        cout << endl;
        t = t + m;
        row--;
    }
    return 0;
}