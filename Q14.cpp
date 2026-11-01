#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, val, threshold;
    vector<int> arr;
    vector<int> ans;
    cout << "Enter number of terms: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        arr.push_back(val);
    }
    cout << "Enter threshold: ";
    cin >> threshold;

    for(int i = 0; i<(int)arr.size(); i++){
        if(arr[i] >= threshold){
            ans.push_back(arr[i]);
        }
    }

    cout << "result: [";
    for(int i = 0; i<(int)ans.size(); i++){
        if(i > 0){
            cout << ", ";
        }
        cout << ans[i];
    }
    cout << "]";
    return 0;
}