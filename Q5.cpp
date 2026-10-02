#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        cout << "invalid number" << endl;
    vector<int> v;
    while (num > 0)
    {
        int digit = num % 10;
        int rem = digit % 2;
        if (rem == 0) {
            v.push_back(0);
        }
        else{
            v.push_back(digit);
        }
        num = num / 10; 
    }
    for (int i = v.size() - 1; i >= 0; i--){
      cout << v[i] << " ";
    }
    return 0;
  }