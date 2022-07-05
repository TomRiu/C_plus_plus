//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;


int main()
{ 
	faster()
	int d, s;
    cin >> d >> s;
    int tmp = s;
    if(s == 0)
    {
        if(d == 1) cout << "0 0";
        else cout << "-1 -1";
        return 0;
    }
    if(s > 9 * d) 
    {
        cout << "-1 -1";
        return 0;
    }
    int a[d];
    s -= 1;
    for(int i = d - 1; i > 0; i--)
    {
        if(s > 9)
        {
            a[i] = 9;
            s -= 9;
        }
        else
        {
            a[i] = s;
            s = 0;
        }
    }
    a[0] = s + 1;
    int b[d] = {};
    s = tmp;
    for(int i = 0; i < d; i++)
    {
        if(s <= 9) 
        {
            b[i] = s;
            s = 0;
        }
        else
        {
            b[i] = 9;
            s -= 9;
        }
    }
    for(int i = 0; i < d; i++) cout << a[i];
    cout << " ";
    for(int i = 0; i < d; i++) cout << b[i];
}  