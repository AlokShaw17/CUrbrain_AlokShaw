#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num;
    long long prefix = 0, mod;
    vector<int> arr;
    cout << "Enter number of terms in array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> num;
        arr.push_back(num);
    }
    cout << "Enter k: ";
    cin >> mod;

    for (int i = 0; i < (int)arr.size(); i++) {
        prefix += arr[i];

        if (prefix % mod == 0) {
            cout << "True" << endl;
            return 0;
        }
    }

    cout << "False" << endl;
}