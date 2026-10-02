#include <iostream>
using namespace std;

int main() {
    int n, m, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    m = n;
    while (m != 0) {
        int a = m % 10;
        rev = rev * 10 + a;
        m = m / 10;
    }
    if (n >= 0 && rev == n) 
      cout << n;
    else 
      cout << n + rev;

    return 0;
}