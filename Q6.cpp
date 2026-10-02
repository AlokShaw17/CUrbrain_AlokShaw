#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    int diff = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (n < 0) {
        cout << "n cannot be negative" << endl;
    }
    if (a < 0 || a > 9) {
        cout << "a must be a single digit" << endl;
    }
    if (b < 0 || b > 9) {
        cout << "b must be a single digit" << endl;
    }

    if (n == 0) {
        if (a == 0) {
          diff = diff + 1;
        }
        if (b == 0) {
          diff = diff - 1;
        }
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit == a) {
          diff = diff + 1;
        }
        if (digit == b) {
          diff = diff - 1;
        }
        n = n / 10;
    }

    if (diff < 0){
      diff = -diff;
    }
    cout << diff << endl;
    return 0;
}