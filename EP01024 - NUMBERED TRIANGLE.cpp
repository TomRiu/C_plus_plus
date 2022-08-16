#include <iostream>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int limit = 1;
    while(n--)
    {
    	for(int i = 1; i <= limit; i++)
    	{
    		cout << i;
		}
		cout << endl;
		limit += 2;
	}
	return 0;
}

