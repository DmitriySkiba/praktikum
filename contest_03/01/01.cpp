#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> nums_main(n1);
    for (int i = 0; i < n1; ++i) {
        cin >> nums_main[i];
    }
    cin >> n2;
    vector<int> nums_sec(n2);
    for (int i = 0; i < n2; ++i) {
        cin >> nums_sec[i];
    }
    for (int i = 0; i < n2; ++i) {
        nums_main.push_back(nums_sec[i]);
    }
  
    sort(nums_main.begin(), nums_main.end()); 

    for (int i = 0; i < (n1 + n2); ++i) {
        cout << nums_main[i] << " ";
    }

    return 0;
}
