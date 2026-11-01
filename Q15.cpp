#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val;
    long long ans;
    vector<long long> arr;

    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        arr.push_back(val);
    }
    ans = arr[0];
    for(int i = 1; i<n; i++){
        if(ans*ans > arr[i]*arr[i]){
            ans = arr[i];
        }
    }
    cout << "result: " << ans;
    return 0;
}