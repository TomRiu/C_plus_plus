#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	int k = 1;
	test()
	{
		cout << "Test " << k << ":" << endl;
		int n, m, p;
		cin >> n >> m >> p;
		int a[10005], b[10005];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		for(int i = 0; i < p; i++) cout << a[i] << ' ';
		for(int i = 0; i < m; i++) cout << b[i] << ' ';
		for(int i = p; i < n; i++) cout << a[i] << ' ';
		cout << endl;
		k++;
	}
	return 0;
}

