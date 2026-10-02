#include <iostream>
using namespace std;

int main() {

    int num, sum = 0, p = 1;
    cout << "Enter a number: ";
    cin >> num;
    if(num <= 0){
        cout << "invalid number" << endl;
        return 0;
    }
    while (num > 0) {
        sum = sum + num % 10;
        p = p * (num % 10);
        num = num / 10;
    }
    cout << p - sum;
    return 0;
}