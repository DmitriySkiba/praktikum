#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double m, h;
	cin >> m >> h;
	
	float answ = static_cast<float>(m) / (h * h);
	cout << std::setprecision(16) << answ;

}