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
		string s;
		cin >> s;
		int k;
		cin >> k;
		string f;
		for(int i = 0; i < s.size(); i++)
		{
            int check = 0;
            s[i] = tolower(s[i]);
			for(int j = 0; j < f.size(); j++)
			{
				if(s[i] == f[j])
                {
                    check = 1;
                    break;
                }
			}
            if(check == 0) f.push_back(s[i]);
		}
		int tmp = 26 - f.size();
		if(tmp <= k) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}

