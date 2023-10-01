#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;
	int ab, ac;
	cin >> a >> b >> c;
	ab = abs(a - b);
	ac = abs(a - c);
	if (ab < ac) {
		cout << "B " << ab;
	}
	else {
		cout << "C " << ac;
	}
}
