#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	faster()
	int a[1000];
	int cnt = 0;
	int sdt = 2;
	for(int i = 'A'; i <= 'Z'; i++)
	{
		if(cnt <= 3 && sdt != 7 && sdt != 9)
		{
			a[i] = sdt;
			cnt++;
			if(cnt == 3)
			{
				cnt = 0;
				sdt++;
			}
		}
		else if(sdt == 7 || sdt == 9)
		{
			a[i] = sdt;
			cnt++;
			if(cnt == 4)
			{
				cnt = 0;
				sdt++;
			}
		}
	}
	test()
	{
		string s;
		cin >> s;
		int f[1005];
		for(int i = 0; i < s.size(); i++) 
		{
			s[i] = toupper(s[i]);
			f[i] = a[s[i]]; 
		}
		int r = 0, l = s.size() - 1;
		int check = 1;
		while(r < l)
		{
			if(f[r] != f[l])
			{
				check = 0; 
				break;
			}
			r++;
			l--;
		}
		if(check == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
