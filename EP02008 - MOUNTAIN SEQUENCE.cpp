#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	test()
	{
		int n;
		cin >> n;
		int a[10005];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l, r;
		cin >> l >> r;
		int s[10005];
		int idx = 0;
		for(int i = l; i <= r; i++) s[idx++] = a[i];
		int top = 0;
        int min;
		int check = 0;
		for(int i = 0; i < idx; i++)
		{
			if(s[i] > top && check == 0) 
            {
                top = s[i];
                if(i == idx - 1) check = 1;
            }
			if(s[i] < top && check == 0) 
            {
                check = 1;
            }
            if(s[i] < top && check == 1 && s[0] == top)
            {
                check = 0;
                break;
            }
			if(s[i] > top && check == 1)
			{
				check = 0;
				break;
			}
		}
		if(check == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
	}
	return 0;
}
