#include <iostream>
#include <cmath>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y = 0, w = 0, d = 0;
    while(n > 0)
    {
    	if(n >= 365) 
		{
			n -= 365;
			y++;
		}
    	else 
    	{
    		w = n / 7;
    		d = n - w * 7;
			n = 0;
		}
	}
	cout << y << ' ' << w << ' ' << d;
	return 0;
}

