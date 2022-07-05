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
		int a[n], cnt = 0;
		for(auto &i : a) cin >> i;
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] + a[j] == k) cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}  