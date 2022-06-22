#include <iostream>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, c1, c2, c3;
    bool flag = false;
    scanf("%d.%d.%d %d.%d.%d", &a1, &a2, &a3, &b1, &b2, &b3);
    if (a1 > b1 || (a1 == b1 && a2 > b2) || (a1 == b1 && a2 == b2 && a3 > b3)) {
        swap(a1, b1);
        swap(a2, b2);
        swap(a3, b3);
        flag = true;
    }
    if (b3 >= a3)
        c3 = b3 - a3;
    else {
        c3 = b3 + 29 - a3;
        b2--;
    }
    if (b2 >= a2)
        c2 = b2 - a2;
    else {
        c2 = b2 + 17 - a2;
        b1--;
    }
    c1 = b1 - a1;
    if (flag) {
        cout << "-" << c1 << "." << c2 << "." << c3;
    } else
        cout << c1 << "." << c2 << "." << c3;
    return 0;
}