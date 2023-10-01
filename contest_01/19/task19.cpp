#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string word;
    unordered_map<string, int> count;
    vector<std::string> answ;

    while (cin >> word && word != "end") {
        count[word]++;
    }

    for (const auto& pair : count) {
        if (pair.second >= 2) {
            answ.push_back(pair.first);
        }
    }

    std::sort(answ.begin(), answ.end());

    for (const auto& word : answ) {
        cout << word << " ";
    }

    return 0;
}
