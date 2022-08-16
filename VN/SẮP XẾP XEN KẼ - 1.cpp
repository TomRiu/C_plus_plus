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
		for(int &i : a) cin >> i;
		sort(a, a + n);
		int l = 0, r = n - 1;
		while(l < r)
			cout << a[r--] << " " << a[l++] << " ";
		if(l == r) cout << a[r];
		cout << endl;
	}
	return 0;
}  