#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	int a[100005] = {};
	int idx = 1;
	for(long long i = 1; i < 100005; i++)
	{
		if(i % 3 != 0 && i % 10 != 3) a[idx++] = i;
	}
	int k;
	cin >> k;
	cout << a[k];
	return 0;
}

