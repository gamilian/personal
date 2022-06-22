#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        for (auto item:str)
            v[i] += (item - '0');
    }
    set<int> s(v.begin(), v.end());
    cout << s.size() << endl;
    bool flag = false;
    for (auto item:s) {
        if (flag) cout << ' ';
        cout << item;
        flag = true;
    }
    return 0;
}
