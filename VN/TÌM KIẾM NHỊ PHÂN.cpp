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
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if(binary_search(a, a + n, k)) cout << 1;
		else cout << -1;
		cout << endl;
	}
	return 0;
}  