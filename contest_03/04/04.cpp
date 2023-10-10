#include <iostream>
#include <set>
#include <string>

int main() {
    int n1, n2;
    std::cin >> n1;
    std::set<std::string> nums_main;
    for (int i = 0; i < n1; ++i) {
        std::string word;
        std::cin >> word;
        nums_main.insert(word);
    }
    std::cin >> n2;
    std::set<std::string> nums_sec;
    for (int i = 0; i < n2; ++i) {
        std::string word;
        std::cin >> word;
        nums_sec.insert(word);
    }
    std::set<std::string> common_words;
    for (const std::string& word : nums_main) {
        if (nums_sec.find(word) != nums_sec.end()) {
            common_words.insert(word);
        }
    }
    if (common_words.empty()) {
        std::cout << "-1\n";
    } else {
        for (const std::string& word : common_words) {
            std::cout << word << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
