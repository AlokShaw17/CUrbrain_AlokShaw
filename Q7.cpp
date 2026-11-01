#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, num;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> num;
        arr.push_back(num);
    }
    int result = arr[0];
    for (int i = 1; i < (int)arr.size(); i++) {
        int a = result, b = arr[i];
        while (b != 0) {        
            int r = a % b;
            a = b;
            b = r;
        }
        result = a;
    }

    cout << "GCD: " << result << endl;
    return 0;
}