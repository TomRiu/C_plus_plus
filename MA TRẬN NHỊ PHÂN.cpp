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
	int n;
	cin >> n;
	int a[n][3], cnt = 0;
	for(int i = 0; i < n; i++)
	{
		int one = 0, zero = 0;
		for(int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
			if(a[i][j] == 1) one++;
			else zero++;
		}
		if(one > zero) cnt++;
	}
	cout << cnt;
	return 0;
}  