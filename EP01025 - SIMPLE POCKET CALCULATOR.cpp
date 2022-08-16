#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    double a, b;
    char k;
    cin >> a >> k >> b;
    if(k == '+') cout << fixed << setprecision(2) << a + b;
	else if(k == '-') cout << fixed << setprecision(2) << a - b;
	else if(k == '*') cout << fixed << setprecision(2) << a * b;
	else if(k == '/') cout << fixed << setprecision(2) << a / b;
	return 0;
}

