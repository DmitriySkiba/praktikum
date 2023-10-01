#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() 
{
	double pi;
	pi = sqrt(12) * (1 - 1.0 / (3 * 3) + 1.0 / (5 * pow(3,2)) - 1.0 / (7.0 * std::pow(3.0, 3.0)) + 1.0 / (9.0 * std::pow(3.0, 4.0)) - 1.0 / (11.0 * std::pow(3.0, 5.0)));
	cout << pi;
}