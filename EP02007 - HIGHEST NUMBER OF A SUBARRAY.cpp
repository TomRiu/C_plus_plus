#include <bits/stdc++.h>
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
        int n, k;
        cin >> n >> k;
        int a[100005];
        for(int i = 0; i < n; i++) cin >> a[i];
        int max = 0;
        int res[100005];
        int idx = 1;
        int p = 0;
        // t�m s? l?n nh?t trong m?ng con d?u ti�n
        for(int i = 0; i < k; i++)
        {
        	if(a[i] >= max) 
            {
                p = i; // d�nh d?u v? tr� c?a max
                max = a[i]; // luu l?i gi� tr? max
            }
        }
        res[0] = max;
        int l = 1; // v? tr� b?t d?u m?ng con th? 2
        // x�t c�c m?ng ti?p theo
        for(int i = k; i < n; i++)
        {
            // ki?m tra xem v? tr� max c� trong m?ng con hay ko
            if(p < l)
            {
                int limit = l + k;
                max = 0;
                for(int j = l; j < limit; j++) 
                {
                    if(a[j] >= max)
                    {
                        p = j;
               			max = a[j];
                    }
                }         
            }
            else if(a[i] >= max) 
            {
                p = i;
                max = a[i];
            }
        	res[idx++] = max;
			l++;
        } 
        for(int i = 0; i < idx; i++) cout << res[i] << ' ';
        cout << "\n";
    }
	return 0;
}
