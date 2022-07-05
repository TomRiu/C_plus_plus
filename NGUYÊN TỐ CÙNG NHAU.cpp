#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
#pragma GCC otimize("Ofast")
#define faster() ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int gcd(int a, int b)
{
	while(b > 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

bool isPrime(int x)
{
	if(x < 2) return 0;
	int sqr = sqrt(x);
	for(int i = 2; i <= sqr; i++)
		if(x % i == 0) return 0;
	return 1;
}

int main()
{
	faster()
	int T = 1; 
	cin >> T; cin.ignore();
	while(T--)
	{
		int x, cnt = 0;
		cin >> x; 
		for(int i = 1; i < x; i++)
			if(gcd(i, x) == 1) cnt++;
		if(isPrime(cnt)) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}