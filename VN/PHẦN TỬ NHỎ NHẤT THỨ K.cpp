#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() if(fopen("input.txt", "r")){freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);}
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    faster()
	test()
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a, a + n);
		cout << a[k - 1] << endl;
	}
    return 0;
}