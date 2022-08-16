#include <iostream>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
long long sD(long long n)
{
	long long sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

long long gcd(long long a, long long b)
{
	long long tmp;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;	
	}
	return a;
}

int main()
{
    test()
    {
    	long long n;
    	cin >> n;
    	int check = 0;
    	while(check == 0)
    	{
    		if(gcd(n, sD(n)) > 1) check = 1;
    		else n++;
		}
		cout << n << endl;
	}
	return 0;
}

