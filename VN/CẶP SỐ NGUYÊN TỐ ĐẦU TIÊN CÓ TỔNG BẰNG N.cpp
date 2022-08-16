#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	test()
	{
		int n;
		cin >> n;
		int m = n;
		int NotPrime[n + 1] = {};
		double sqr = sqrt(n);
		for(int i = 2; i <= sqr; i++)
		{
			if(NotPrime[i] == 0)
			{
				for(int j = i * i; j <= n; j += i)
				{
					NotPrime[j] = 1;
				}
			}	
		}
		int check = 0;
		for(int i = 2; i < 100005; i++)
		{
			if(i > n) break;
			if(NotPrime[i] == 0) 
			{
				n -= i;
				if(NotPrime[n] == 0) 
				{
					check = 1;
					break;
				}
				else n += i;
			}
		}
		if(check == 1) printf("%d %d\n", m - n, n);
		else printf("-1\n");
	} 
	return 0;
}
