#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
	faster()
	int n;
	cin >> n;
	int i = pow(10, n - 1);
	int limit = pow(10, n);
	int cnt = 0;
	for(i; i < limit; i++)
	{
		int tmp = i;
		int ecnt = 0;
		int ocnt = 0;
		while(tmp)
		{
			if((tmp % 10) % 2 == 0) ecnt++;
			else ocnt++;
			tmp /= 10;
		}
		if(ecnt == ocnt) 
		{
			cnt++;
			cout << i << " ";
		}
		if(cnt == 10)
		{
			cnt = 0; 
			cout << endl;
		}
	}
	return 0;
}
