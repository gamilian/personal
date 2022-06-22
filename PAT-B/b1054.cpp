#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

bool isNum(string str) {
    stringstream sin(str);
    double test1;
    int test2;
    return (sin >> test1 || sin >> test2) && sin.eof();
}

bool isInt(string str) {
    stringstream sin(str);
    int test;
    return sin >> test && sin.eof();
}

bool isFloat(string str) {
    stringstream sin(str);
    double test;
    return sin >> test && sin.eof();
}

bool isLegalDouble(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '.')
            return (str.length() - i - 1) <= 2;
    }
}

int main() {
    int n;
    double sum = 0;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        stringstream str_temp(str);
        int str_int;
        double str_double;
        if (isInt(str)) {
            str_temp >> str_int;
            if (str_int >= -1000 && str_int <= 1000)
                v.push_back(to_string(str_int));
            else
                cout << "ERROR: " << str << " is not a legal number" << endl;
        } else if (isFloat(str)) {
            str_temp >> str_double;
            if (isLegalDouble(str) && str_double >= -1000 && str_double <= 1000)
                v.push_back(to_string(str_double));
            else
                cout << "ERROR: " << str << " is not a legal number" << endl;
        } else
            cout << "ERROR: " << str << " is not a legal number" << endl;
    }
    for (auto item : v) {
        stringstream str_temp(item);
        double str_float;
        str_temp >> str_float;
        sum += str_float;
    }
    cout.setf(ios::fixed);
    if (v.size() == 1)
        cout << fixed << setprecision(2) << "The average of " << v.size() << " number is " << sum / v.size();
    else if (v.size() > 1)
        cout << fixed << setprecision(2) << "The average of " << v.size() << " numbers is " << sum / v.size();
    else
        cout << "The average of 0 numbers is Undefined";
    return 0;
}
