#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
	string msv, name, cls, d, m, y;
	double gpa; 
};

void input(Student &a)
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

void fix(Student &a)
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

void print(Student &a)
{
	fix(a);
	cout << a.msv << ' ' << a.name << a.cls << ' ';
	cout << a.d << '/' << a.m << '/' << a.y << ' ';
    cout << fixed << setprecision(2) << a.gpa;
}

int main(){
    Student a;
    input(a);
    print(a);
    return 0;
}
