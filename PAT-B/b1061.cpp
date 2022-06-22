#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> score(m);
    vector<int> ans(m);
    for (int i = 0; i < m; ++i)
        cin >> score[i];
    for (int i = 0; i < m; ++i)
        cin >> ans[i];
    for (int i = 0; i < n; ++i) {
        int res = 0;
        for (int j = 0; j < m; ++j) {
            int temp;
            cin >> temp;
            if (temp == ans[j])
                res += score[j];
        }
        cout << res << endl;
    }
    return 0;
}