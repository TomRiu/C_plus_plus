#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
    	double n, res = 1;
    	cin >> n;
    	for(int i = 2; i <= n; i++)
    	{
    		res = sqrt(i + res);
		}
    	cout << fixed << setprecision(5) << res << endl; 
	}
	return 0;
}

