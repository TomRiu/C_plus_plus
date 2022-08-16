#include <iostream>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
    	long long n, sum = 0;
    	cin >> n;
    	long long m = n;
    	Run:
	    	while(m > 0)
	    	{
	    		sum += m % 10;
	    		m /= 10;
			}
		if(sum > 9) 
		{
			m = sum;
			sum = 0;
			goto Run;
		}
		else cout << sum << endl;
	}
	return 0;
}

