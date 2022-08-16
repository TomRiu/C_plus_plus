#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    string s;
    cin >> s;
	int check = 0;
    for(int i = 0; i < s.size() - 1; i++)
    {
		int cnt = 1;
        while(s[i] == s[i + 1] && i < s.size() - 1)
        {
			cnt++;
			i++;
        }
		if(cnt >= 7)
		{
			check = 1;
			break;
		}
    }
    if(check == 1) cout << "YES";
    else cout << "NO";
    cout << endl;
}
