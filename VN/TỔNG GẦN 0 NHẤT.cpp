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
		for(int i = 0; i < n; i++) cin >> a[i];
		int ans = -1e6;
		for(int i = 0; i < n - 1; i++)
			for(int j = i + 1; j < n; j++)
				if(abs(ans) > abs(a[i] + a[j])) ans = a[i] + a[j];
        cout << ans << endl;
	}
	return 0;
}  