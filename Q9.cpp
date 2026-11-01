#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int x = n + 1;
    while (true) {
        int divisors = 0;

        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0) {
                divisors++;
                break;
            }
        }

        if (x >= 2 && divisors == 0) break;
        x++;
    }

    cout << "Next prime: " << x << endl;
    return 0;
}