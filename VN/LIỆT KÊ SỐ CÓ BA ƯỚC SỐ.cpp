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
		int NotPrime[n + 1] = {};
		NotPrime[0] = 1;
		NotPrime[1] = 1;
		int Prime[n] = {};
		int idx = 0;
		double sqr = sqrt(n);
		for(int i = 2; i <= sqr; i++)
		{
			if(NotPrime[i] == 0)
			{
				Prime[idx++] = i;
				for(int j = i * i; j <= n; j += i)
				{
					NotPrime[j] = 1;
				}
			}	
		}
		for(int i = 0; i < idx; i++)
		{
			if(Prime[i] * Prime[i] > n) break;
			else cout << Prime[i] * Prime[i] << " "; 
		}
		cout << endl;
	} 
	return 0;
}