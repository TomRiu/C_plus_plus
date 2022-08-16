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
		map<int, int> m;
		int a[n];
		for(int &i : a)
			cin >> i;
		int i;
		for(i = 0; i < n; i++)
		{
			m[a[i]]++;
			if(m[a[i]] > 1) break;
		}
		if(i != n) cout << a[i];
		else cout << -1;
		cout << endl;
	}
	return 0;
}  