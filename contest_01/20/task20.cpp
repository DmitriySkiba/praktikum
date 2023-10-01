#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	unsigned long int num1, num2;
	string string1, string2;
	
	cin >> num1 >> num2;
	
	string1 = to_string(num1);
	string2 = to_string(num2);

	for (int i = 0; i < string1.length(); i++) {
		auto answ = find(begin(string2), end(string2), string1[i]);
		if (answ == end(string2)) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}