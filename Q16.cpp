#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val, first = -1, second = -1;
    vector<int> arr;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        arr.push_back(val);
    }
    for(int i = 0; i<(int)arr.size(); i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] < first && arr[i] > second){
            second = arr[i];
        }
    }
    cout << "result: " << second;
    return 0;
}