#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#include <iomanip>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	double c;
	cin >> c;
	cout << fixed << setprecision(2) << (c * 9 / 5) + 32;
	return 0;
}

