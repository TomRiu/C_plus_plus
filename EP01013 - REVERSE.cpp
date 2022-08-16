#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long r = 0;
	while(n > 0)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	cout << r;
	return 0;
}


