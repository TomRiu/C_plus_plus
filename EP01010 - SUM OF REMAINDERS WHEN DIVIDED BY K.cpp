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
		long long n, k;
		cin >> n >> k;
		long long sum = 0;
		for(int i = 1; i <= n; i++)
		{
			if(i < k) sum += i;
			else sum += i % k;
		}
		if(sum == k) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}


