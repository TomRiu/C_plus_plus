#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	int n;
	cin >> n;
	int a[100] = {};
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++)
	{
		if(a[i] - a[i - 1] > 15)
		{
			cout << a[i - 1] + 15;
			break;
		}
		else if(i == n)
		{
			if(90 - a[i] <= 15)
			{
				cout << "90";
				break;
			}
			else
			{
				cout << a[i] + 15;
				break;
			}
		}
	}
	return 0;
}

