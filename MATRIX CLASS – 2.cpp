#include <bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)

class mat{
	public:
	int a[50][50];
};

void input(mat &x,mat &y,int n,int m,int p){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>x.a[i][j];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++) cin>>y.a[i][j];
	}
}

void tinh(mat &x,mat &y,int n,int m,int p){
	int tich[m][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			tich[i][j]=0;
			for(int k=0;k<m;k++){
				tich[i][j]+=x.a[i][k]*y.a[k][j];
			}
			cout<<tich[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
		class mat x,y;
		int n,m,p;
		cin>>n>>m>>p;
		input(x,y,n,m,p);
		tinh(x,y,n,m,p);
}
