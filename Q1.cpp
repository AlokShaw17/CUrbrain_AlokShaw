#include <iostream>
using namespace std;

int main(){
    int num, count = 0;
    cout << "Enter Number to be checked: ";
    cin >> num;
    while(num != 0){
        num = num/10;
        count++;
    }

    if(count == 0 || count % 2 == 1){
        cout << "false" << endl;
        return 0;
    }

    if(count%2 == 0){
        cout << "true" << endl;
    }
  }