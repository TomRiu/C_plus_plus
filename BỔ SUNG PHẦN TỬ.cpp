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
		int a[n];
		map<int, int> m;
		for(int &i : a)
		{
			cin >> i;
			m[i]++;
		}
		sort(a, a + n);
		int k = a[0], end = a[n - 1], cnt = 0;
		for(int i = a[0]; i <= end; i++)
		{
			if(m[i] == 0) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}  