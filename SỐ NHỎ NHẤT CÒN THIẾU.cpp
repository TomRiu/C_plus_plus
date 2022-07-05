//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{ 
	faster()
	test()
	{
		int n;
		cin >> n;
		int a[n] = {};
		for(int i = 1; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for(int i = 1; i <= n; i++)
		{
			if(a[i] != i)
			{
				cout << i;
				break;
			}
		}
		cout << endl;
	}
	return 0;
}  