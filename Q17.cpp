#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n, val, ans = 0, best = 0;
    unordered_map<int, int> freq;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        cout << "Enter value to insert: ";
        cin >> val;
        freq[val]++;
    }
    for(auto p : freq){
        if(p.second > best || (p.second == best && p.first < ans)){
            best = p.second;
            ans = p.first;
        }
    }
    cout << "result: " << ans;
    return 0;
}