#include <bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)

class mat{
	public:
	int a[50][50];
	int dong,cot;
};

void input(mat &d){
	cin>>d.dong>>d.cot;
	for(int i=0;i<d.dong;i++){
		for(int j=0;j<d.cot;j++) cin>>d.a[i][j];
	}
}

void tinh(mat &d){
	int b[d.cot][d.dong],tich[d.dong][d.dong];
	for(int i=0;i<d.cot;i++) for(int j=0;j<d.dong;j++) b[i][j]=d.a[j][i];
	for(int i=0;i<d.dong;i++){
		for(int j=0;j<d.dong;j++){
			tich[i][j]=0;
			for(int k=0;k<d.cot;k++){
				tich[i][j]+=d.a[i][k]*b[k][j];
			}
			cout<<tich[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	test() {
		class mat a;
		input(a);
		tinh(a);
	}
}
