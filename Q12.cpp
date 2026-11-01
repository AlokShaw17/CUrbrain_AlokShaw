#include <iostream>
using namespace std;

int main(){
  long long i = 0;
    long long power, base, mod, result;
    cout << "enter base: ";
    cin >> base;
    cout << "Enter power: ";
    cin >> power;
    cout << "Enter MODULO: ";
    cin >> mod;

    result = 1 % mod;
    for( i ; i<power; i++){
        result = (result * base) % mod;
    }
    cout << "Answer: " << result << endl;
    return 0;
}