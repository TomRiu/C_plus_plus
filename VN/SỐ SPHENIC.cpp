//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool isSphenic(int n)
{
	float k = sqrt(n);
	int digit = 0;
	for(int i = 2; i <= k; i++)
	{
		int cnt = 0;
		while(n % i == 0)
		{
			n /= i;
			cnt++;
		}
		if(cnt > 1) return 0;
		if(cnt == 1) digit++;
	}
	if(n > 1) digit++;
	return digit == 3;
}

int main()
{ 
	faster()
	test()
	{
		int n;
		cin >> n;
		cout << isSphenic(n) << endl;
	}
	return 0;
}  