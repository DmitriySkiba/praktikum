#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> count;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        count[word]++;
    }
    int maxcount = 0;
    for (const auto& pair : count) {
        maxcount = max(maxcount, pair.second);
    }
    vector<string> answ;
    for (const auto& pair : count) {
        if (pair.second == maxcount) {
            answ.push_back(pair.first);
        }
    }
    sort(answ.begin(), answ.end());
    for (const string& word : answ) {
        cout << word << " ";
    }
    return 0;
}