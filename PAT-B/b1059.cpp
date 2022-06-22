#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool is_prime(int x) {
    if (x <= 1)
        return false;
    for (int i = 2; i <= sqrt((double) x); ++i) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, k, arr[10010] = {0};
    bool isChecked[10010] = {false};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr[temp] = i + 1;
    }
    cin >> k;
    for (int i = 0; i < k; ++i) {
        int temp;
        cin >> temp;
        cout.fill('0');
        if (arr[temp] == 1) {
            if (!isChecked[temp]) {
                cout << setw(4) << temp << ": " << "Mystery Award" << endl;
                isChecked[temp] = true;
            } else
                cout << setw(4) << temp << ": " << "Checked" << endl;
        } else if (arr[temp] == 0) {
            cout << setw(4) << temp << ": " << "Are you kidding?" << endl;
        } else if (is_prime(arr[temp])) {
            if (!isChecked[temp]) {
                cout << setw(4) << temp << ": " << "Minion" << endl;
                isChecked[temp] = true;
            } else
                cout << setw(4) << temp << ": " << "Checked" << endl;
        } else {
            if (!isChecked[temp]) {
                cout << setw(4) << temp << ": " << "Chocolate" << endl;
                isChecked[temp] = true;
            } else
                cout << setw(4) << temp << ": " << "Checked" << endl;
        }
    }
    return 0;
}