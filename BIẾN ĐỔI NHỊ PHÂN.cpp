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
			int n, m;
			cin >> n >> m;
			int a[n][m], hang[n] = {}, cot[m] = {};
			for(int i = 0; i < n; i++)
				for(int j = 0; j < m; j++) 
					cin >> a[i][j];
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					if(a[i][j] == 1)
					{
						hang[i] = 1;
						cot[j] = 1;
					}
				}
			}
			for(int i = 0; i < n; i++)
			{
				if(hang[i] == 1)
				{
					for(int j = 0; j < m; j++)
					{
						a[i][j] = 1;
					}
				}
			}
			for(int i = 0; i < m; i++)
			{
				if(cot[i] == 1)
				{
					for(int j = 0; j < n; j++)
					{
						a[j][i] = 1;
					}
				}
			}
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < m; j++)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}
		return 0;
	} 