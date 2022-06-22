#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, d;
    double may = 0.000, empty = 0.000;
    double e;
    cin >> n >> e >> d;
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        int cnt = 0;
        for (int j = 0; j < k; ++j) {
            double temp;
            cin >> temp;
            if (temp < e)
                cnt++;
        }
        if (cnt * 2 > k && k > d)
            empty++;
        if (cnt * 2 > k && k <= d)
            may++;
    }
    cout.setf(ios::fixed);
    cout << fixed << setprecision(1) << may / n * 100 << '%' << ' ' << empty / n * 100 << '%';
//    printf("%.1f%% %.1f%%", may / n * 100, empty / n * 100);
    return 0;
}