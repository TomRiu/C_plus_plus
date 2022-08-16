#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void bubbleSort(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(a[j] > a[j + 1]) Swap(a[j], a[j + 1]);
		}
	}
}

int main()
{
    test()
    {
    	int n;
    	cin >> n;
    	int a[100005];
    	for(int i = 0; i < n; i++) cin >> a[i];
    	bubbleSort(a, n);
    	int f[100005] = {};
    	for(int i = 0; i <= n - 2; i++)
    	{
    		f[i] = a[i + 1] - a[i];
		}
		for(int i = 0; i <= n - 3; i++)
		{
			if(f[i] < f[i + 1]) Swap(f[i], f[i + 1]);
		}
		cout << f[n - 2] << endl;
	}	
	return 0;
}

