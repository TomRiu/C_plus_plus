#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
	string msv, name, cls, d, m, y;
	double gpa; 
};

void nhap(SinhVien &a)
{
    a.msv = "B20DCCN001";
	getline(cin, a.name); 
	cin >> a.cls;
    cin.ignore();
	getline(cin, a.d, '/');
	getline(cin, a.m, '/');
	cin >> a.y;
	cin >> a.gpa;
}

void fix(SinhVien &a)
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

void in(SinhVien &a)
{
	fix(a);
	cout << a.msv << ' ' << a.name << a.cls << ' ';
	cout << a.d << '/' << a.m << '/' << a.y << ' ';
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
