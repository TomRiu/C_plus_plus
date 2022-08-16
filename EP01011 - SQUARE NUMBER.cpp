#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	long long a, b, sum = 0;
	cin >> a >> b;
	long long limit = sqrt(b);
	long long i = sqrt(a);
	for(; i <= limit; i++)
	{
		long long tmp = i * i;
		if(tmp >= a) sum += tmp;
	}
	cout << sum;
	return 0;
}


