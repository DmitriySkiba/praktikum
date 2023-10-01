#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long maxleft, maxright, wsumm = 0;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        maxright = 0;
        maxleft = 0;
        for (int k = 0; k < i; k++) {
            if (nums[k] > maxleft) {
                maxleft = nums[k];
            }
        }
        for (int k = i + 1; k < n; k++) {
            if (nums[k] > maxright) {
                maxright = nums[k];
            }
        }
        if (nums[i] < maxright && nums[i] < maxleft) {
            wsumm += min(maxleft, maxright) - nums[i];
        }
    }

    cout << wsumm << endl;
}
