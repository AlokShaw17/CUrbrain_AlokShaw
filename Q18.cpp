#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val, start, end;
    vector<int> arr;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        arr.push_back(val);
    }
    cout << "Enter start index: ";
    cin >> start;
    cout << "Enter end index: ";
    cin >> end;
    for(int i = start, j = end; i < j; i++, j--){
        swap(arr[i], arr[j]);
    }
    cout << "result: ";
    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}