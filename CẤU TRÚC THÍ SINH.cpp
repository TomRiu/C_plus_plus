#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
	string name, d, m, y;
	float s1, s2, s3;
};

void nhap(ThiSinh &a)
{
	getline(cin, a.name);
	getline(cin, a.d, '/');
	getline(cin, a.m, '/');
	cin >> a.y;
	cin >> a.s1 >> a.s2 >> a.s3;
}

void fix(ThiSinh &a)
{
	string s, x;
	stringstream ss(a.name);
	while(ss >> x)
	{
		x[0] = toupper(x[0]);
		for(int j = 1; j < x.size(); j++)
		{
			x[j] = tolower(x[j]);
		}
		s += x + " ";
	}
	a.name = s;
    if(a.d[1] == NULL) a.d = "0" + a.d; 
    if(a.m[1] == NULL) a.m = "0" + a.m;
}

void in(ThiSinh &a)
{
	fix(a);
	cout << a.name; 
	cout << a.d << '/' << a.m << '/' << a.y << " ";
	cout << fixed << setprecision(1) << a.s1 + a.s2 + a.s3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
