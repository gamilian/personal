#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long p;
    cin >> n >> p;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int pos = 0, count = 0;  //pos is the subscript of vector;
    for (int i = 0; i < v.size(); i++) {
        for (int j = pos; j < v.size(); j++) {
            if (v[j] <= p * v[i])
                pos++;
            else
                break;
        }
        if (count < pos - i)
            count = pos - i;
    }
    cout << count;
    return 0;
}