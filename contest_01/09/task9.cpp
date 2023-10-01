#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	float a, b;
	float gipotenuza;
	cin >> a;
	cin >> b;
	gipotenuza = sqrt(a * a + b * b);
	cout << std::setprecision(16) << gipotenuza;
}

