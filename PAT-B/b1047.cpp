#include <iostream>

using namespace std;

int main() {
    int n, num1, num2, grade, max = 0;
    int arr[1001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d-%d %d", &num1, &num2, &grade);
        arr[num1] += grade;
    }
    for (int i = 0; i < 1001; ++i) {
        if (arr[i] > arr[max])
            max = i;
    }
    printf("%d %d", max, arr[max]);
}