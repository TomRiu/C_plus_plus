#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
void fibonacci(int a[], int n)
{
	int a1 = 1, a2 = 1;
    int i = 3;
    while (i <= n)
    {
        a[i] = a1 + a2;
        a1 = a2;
        a2 = a[i];
        i++;
    }
}

int main()
{
	int a[25] = {};
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	fibonacci(a, 20);
	int f[10005] = {};
	for(int i : a) f[i] = 1;
	test()
	{
		int n;
		cin >> n;
		int x[105];
		for(int i = 0; i < n; i++) cin >> x[i];
		for(int i = 0; i < n; i++)
		{
			if(f[x[i]] == 1) cout << x[i] << " ";
		}
		cout << endl;
	} 
	return 0;
}
