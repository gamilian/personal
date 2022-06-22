#include <iostream>

using namespace std;

struct Student {
    string name;
    string num;
    int grade;
} student[10010];

int main() {
    int n, max_grade = 0, min_grade = 100, max_id = 0, min_id = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> student[i].name >> student[i].num >> student[i].grade;
        if (student[i].grade >= max_grade) {
            max_id = i;
            max_grade = student[i].grade;
        }
        if (student[i].grade < min_grade) {
            min_id = i;
            min_grade = student[i].grade;
        }
    }
    cout << student[max_id].name << " " << student[max_id].num << endl;
    cout << student[min_id].name << " " << student[min_id].num << endl;
    return 0;
}
