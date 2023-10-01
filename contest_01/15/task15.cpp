#include <iostream>
#include <string>
using namespace std;


int main() {
    string word;
    getline(cin, word);
    string ans;

    char v = word[0];
    int count = 1;
    int n = word.length();

    for (int i = 1; i < n; ++i) {
        if (word[i] == v) {
            count++;
        }
        else {
            if (count > 1) {
                ans += v + to_string(count);
            }
            else {
                ans += v;
            }

            v = word[i];
            count = 1;
        }
    }

    if (count > 1) {
        ans += v + to_string(count);
    }
    else {
        ans += v;
    }

    cout << ans;

    return 0;
}
