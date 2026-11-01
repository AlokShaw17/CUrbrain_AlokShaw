#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter n: ";
    cin >> n;
    vector<int> test(n, 0); 
    for (int p = 2; p * p < n; p++) {
        if (test[p] == 0) {
            for (int j = p * p; j < n; j += p) {
                test[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++) {  
        if (test[i] == 0) count++;
    }
    cout << "No of prime less than n: " << count << endl;
    return 0;
}