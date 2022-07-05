#include <bits/stdc++.h>
using namespace std;

struct Point
{
	double x, y;
};

void input(Point &A)
{
	cin >> A.x >> A.y;
}

double distance(Point A, Point B)
{
	double X = A.x - B.x;
	double Y = A.y - B.y;
	double res = sqrt(X * X + Y * Y);
	return res;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
