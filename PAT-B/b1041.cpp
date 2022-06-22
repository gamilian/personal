#include <iostream>

using namespace std;

typedef struct Student {
    string num1;
    int num2;
};

int main() {
    int n, m;
    Student student[1010];
    string temp1;
    int temp2, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp1 >> num >> temp2;
        student[num].num1 = temp1;
        student[num].num2 = temp2;
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> num;
        cout << student[num].num1 << " " << student[num].num2 << endl;
    }
    return 0;
}
