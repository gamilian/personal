#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    string name, birth, maxname, maxbirth = "2014/09/06", minname, minbirth = "1814/09/06";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> birth;
        if (birth >= "1814/09/06" && birth <= "2014/09/06") {
            count++;
            if (birth < maxbirth) {
                maxbirth = birth;
                maxname = name;
            }
            if (birth > minbirth) {
                minbirth = birth;
                minname = name;
            }
        }
    }
    if (count != 0)
        cout << count << ' ' << maxname << ' ' << minname;
    else
        cout << count;
    return 0;
}