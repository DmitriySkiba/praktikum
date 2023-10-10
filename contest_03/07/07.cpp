#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ifstream file("data.txt");

    string text;
    getline(file, text);

    string target;
    cin >> target;

    unordered_map<string, int> wordCount;
    vector<string> words;
    set<string> pref;

    string delim(" ");
    size_t start = 0;
    size_t end = text.find(delim);
    while (end != string::npos) {
        string word = text.substr(start, end - start);
        words.push_back(word);
        start = end + delim.length();
        end = text.find(delim, start);
    }
    string lastWord = text.substr(start);
    words.push_back(lastWord);

    bool targetFound = false;
    for (size_t i = 0; i < words.size() - 1; i++) {
        if (words[i] == target) {
            targetFound = true;
            string nextWord = words[i + 1];
            wordCount[nextWord]++;
        }
    }

    if (!targetFound) {
        cout << "-" << endl;
        return 0;
    }

    while (pref.size() < 3) {
        string answ = "";
        int maxCount = 0;
        for (const auto& entry : wordCount) {
            if (pref.count(entry.first) == 0) {
                if (entry.second > maxCount) {
                    answ = entry.first;
                    maxCount = entry.second;
                }
                else if (entry.second == maxCount && entry.first < answ) {
                    answ = entry.first;
                }
            }
        }

        if (answ.empty()) {
            break;
        }
        else {
            pref.insert(answ);
            cout << answ << " ";
        }
    }

    return 0;
}