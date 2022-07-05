#include <iostream>
#include <string.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
	test()
	{
		char c[19];
		cin >> c;
		int size = strlen(c);
		for(int i = 0; i < size; i++)
		{
			if(c[i] == '0' && c[i + 1] == '8' && c[i + 2] == '4')
			{
				i += 2;
			}
			else cout << c[i];
		}
		cout << endl;
	}
	return 0;
}
