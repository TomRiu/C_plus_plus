#include <bits/stdc++.h>
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
        string a, b;
        cin >> a >> b;
        if(a.size() < b.size()) swap(a, b);
        int x[1005], y[1005];
        for(int i = 0; i < a.size(); i++)
        {
            x[i] = a[i] - '0';
        }
        for(int i = 0; i < b.size(); i++)
        {
            y[i] = b[i] - '0';
        }
        int bs = b.size() - 1;
        int check = 0;
        for(int i = a.size() - 1; 0 <= i; i--)
        {
            if(bs >= 0)x[i] += y[bs--];
            if(x[i] > 9) 
            {
                x[i] -= 10;
                if(i > 0) x[i - 1] += 1;
                else check = 1;
            }
        }
        if(check == 1) cout << "1";
        for(int i = 0; i < a.size(); i++) cout << x[i];
        cout << endl;
    }
	return 0;
}  

