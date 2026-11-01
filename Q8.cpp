#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num, pos;
    vector<int> list;
    cout << "Num to factorise: ";
    cin >> num;
    cout << "factor position : ";
    cin >> pos;

    for (int d = 1; d <= num / d; d++) {
        if (num % d == 0) {
            list.push_back(d);
            if (d != num / d) {
                list.push_back(num / d);
            }
        }
    }
    sort(list.begin(), list.end());

    if (pos > (int)list.size()) {
        cout << "Result: -1" << endl;
    } else {
        cout << "Result: " << list[pos - 1] << endl;
    }
    return 0;
}