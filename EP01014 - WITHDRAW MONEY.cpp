#include <iostream>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
    	int n, cnt = 0;
    	cin >> n;
    	int c[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    	int idx = 9;
		while(n > 0)
    	{
    		if(n >= c[idx]) 
    		{
    			cnt++;
    			n -= c[idx];
			}
			else idx--;
		}
		cout << cnt << endl;
	}
	return 0;
}

