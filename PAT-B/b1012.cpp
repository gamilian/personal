#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    double A4 = 0;
    int N, x;
    cin >> N;
    vector<int> v[5];
    for (int i = 0; i < N; ++i) {
        cin >> x;
        v[x % 5].push_back(x);
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
            if (i == 1) {
                if (j % 2 == 0)
                    A2 += v[i][j];
                else
                    A2 -= v[i][j];
            }
            if (i == 2) A3++;
            if (i == 3) A4 += v[i][j];
            if (i == 4 && v[i][j] > A5) A5 = v[i][j];
        }
    }
    A4 /= v[3].size();
    if (A1 == 0) cout << "N ";
    else cout << A1 << " ";
    if (v[1].size() == 0) cout << "N ";
    else cout << A2 << " ";
    if (v[2].size() == 0) cout << "N ";
    else cout << A3 << " ";
    if (v[3].size() == 0) cout << "N ";
    else cout << fixed << setprecision(1) << A4 << ' ';
    if (v[4].size() == 0) cout << "N";
    else cout << A5;
    return 0;
}