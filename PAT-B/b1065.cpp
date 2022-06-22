#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n, m, cnt = 0;
    map<int, int> map1;
    cin >> n;
    vector<int> hashTable(n);  //第几对情侣中到了几个
    for (int i = 0; i < n; ++i) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        map1[temp1] = i;
        map1[temp2] = i;
    }
    cin >> m;
    set<int> s; //存放单身
    vector<int> v; //存放有情侣的
    for (int i = 0; i < m; ++i) {
        int temp;
        cin >> temp;
        if (map1.count(temp) == 0)
            s.insert(temp);
        else {
            v.push_back(temp);
            hashTable[map1.at(temp)]++;
        }
    }
    for (auto item: v) {
        if (hashTable[map1[item]] == 2)
            continue;
        else
            s.insert(item);
    }
    cout << s.size() << endl;
    bool flag = false;
    for (auto item:s) {
        if (flag) cout << ' ';
        cout.fill('0');
        cout << setw(5) << item;
        flag = true;
    }
    return 0;
}