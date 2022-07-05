#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() if(fopen("input.txt", "r")){freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);}
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
	fio()
    faster()
	test()
	{
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
					cout << a[i][j];
				else cout << " ";
				cout << " ";
			}
			cout << endl;
		}
	}
    return 0;
}