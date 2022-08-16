#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

int notPrime[100000] = {};
int Prime[10000] = {}, idxPrime = 0;
void sieve()
{
	notPrime[0] = 1;
	notPrime[1] = 1;
    int sqr = sqrt(100000);
    for(int i = 2; i <= sqr; i++)
    {
        if(notPrime[i] == 0)
            for(int j = i * i; j < 100000; j+=i) notPrime[j] = 1;
    }
    for(int i = 2; i < 100000; i++)
        if(notPrime[i] == 0) Prime[idxPrime++] = i;
}

int main()
{
	sieve();
	faster()
	test()
	{
		ll n;
		cin >> n;
		for(auto i : Prime)
		{
			if(i > n) break;
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

