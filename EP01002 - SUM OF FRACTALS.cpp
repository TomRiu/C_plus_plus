#include <iostream>
using namespace std;
int main()
{
	long long n,res = 0;
	cin >> n;
	for(long long i = 1; i <= n; i++)
	{
		long long tmp = 1;
		for(long long j = 1; j <= i; j++)
		{
			tmp *= j;
		}
		res += tmp;
	}
	cout << res;
	return 0;
}

