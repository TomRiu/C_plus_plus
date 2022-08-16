#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#include <iomanip>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	test()
	{
		long long n;
		cin >> n;
		long long m = n;
		long long sum = 0;
		while(m > 0)
		{
			sum += m % 10;
			m /= 10;
		}
		double sqr = sqrt(sum);
		int check = 1;
		for(int i = 2; i <= sqr; i++)
		{
			if(sum % i == 0)
			{
				check = 0;
				break;
			} 
		}
		if(check == 1) cout << n << endl;
		else cout << "-1\n"; 
	}
	return 0;
}


