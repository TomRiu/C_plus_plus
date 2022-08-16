#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
long long cat(long long n)
{ 
	long long c[1500]={};
	c[0] = 1;
	c[1] = 1;
    for (int i=2; i<n; i++) 
	{
		for(int j=0; j<i; j++)
		{
			c[i] += c[j]*c[i-j-1];
			c[i] %= MOD;
		}
	}
	return c[n/2];
} 
 
int main() 
{
	faster()
	ll n;
	cin >> n;
	cout << cat(n) << endl;
}

