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
		ll a[n], b[m];
		for(ll &i : a) cin >> i;
		for(ll &i : b) cin >> i;
		ll big = *max_element(a, a + n);
		ll small = *min_element(b, b + m);
		cout << big * small << endl; 
	}
	return 0;
}  