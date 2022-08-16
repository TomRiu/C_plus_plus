#include <bits/stdc++.h>
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
        int x, y;
        cin >> x >> y;
        int ax[10005] = {}, ay[10005] = {};
        int bx[10005] = {}, by[10005] = {};
        int ix = 0;
        int limit = sqrt(x);
        for(int i = 2; i <= limit; i++)
        {
            if(x % i == 0 && i > 3) ax[ix++] = i;
            while(x % i == 0)
            {
                if(i > 3) bx[ix - 1]++;
                x /= i;
            }
        }
        if(x > 3) 
        {
            ax[ix] = x; 
            bx[ix++] = 1;
        }
        int iy = 0;
        limit = sqrt(y);
        for(int i = 2; i <= limit; i++)
        {
            if(y % i == 0 && i > 3) ay[iy++] = i;
            while(y % i == 0)
            {
                if(i > 3) by[iy - 1]++;
                y /= i;
            }
        }
        if(y > 3) 
        {
            ay[iy] = y; 
            by[iy++] = 1;
        }
            int check = 0;
            limit = (ix > iy) ? ix : iy;
            for(int i = 0; i < limit; i++)
            {
                if(ax[i] == ay[i] && bx[i] == by[i])
                {
                    check++;
                }
                else
                {
                    check = -1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if(check >= 0) cout << "YES" << endl;
    }
	return 0;
}  
