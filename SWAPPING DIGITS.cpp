#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	test()
	{
		cin.ignore();
		string n;
		cin >> n;
		string s = n;
		int sz = n.size() - 1;
		for(int i = sz; i > 0; i--)
		{
			if(n[i - 1] > n[i]) 
			{
				int max = n[i];
				int p = i;
				for(int j = i + 1; j <= sz; j++)
				{
					if(n[j] > max && n[j] < n[i - 1]) p = j;
				}
				swap(n[i - 1], n[p]);
				break;
			}
		}
		if(n != s) cout << n;
		else cout << "-1";
		cout << endl;
	}
	return 0;
}
