#include<bits/stdc++.h>
#pragma GCC optimize (O2) 
#define ll long long
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll MOD = 1e9 + 7;

using namespace std;
int main()
{
	faster()
	int T = 1;
	cin >> T; cin.ignore();
	while(T--)
	{
		int m, n, a, b, cnt = 0;
		cin >> m >> n >> a >> b;
		while(m <= n)
		{
			if(m % a == 0 || m % b == 0) cnt++;
			m++;
		}
		cout << cnt << endl;
	}
	return 0;
}
