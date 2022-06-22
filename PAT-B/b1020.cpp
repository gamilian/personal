#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct cake {
    float store, sell, price;
};

bool cmp(cake a, cake b) {
    return a.price > b.price;
}

int main() {
    int N, D;
    cin >> N >> D;
    vector<cake> v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i].store;
    for (int i = 0; i < N; i++)
        cin >> v[i].sell;
    for (int i = 0; i < N; i++)
        v[i].price = v[i].sell / v[i].store;
    sort(v.begin(), v.end(), cmp);
    float res = 0;
    for (int i = 0; i < N; i++) {
        if (v[i].store <= D) res += v[i].sell;
        else {
            res += v[i].price * D;
            break;
        }
        D -= v[i].store;
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}