#include<iostream>
using namespace std;
const double PI = acos(-1);
int main(){
	double x1,y1,r1,x2,y2,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	double d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	if (d<r1+r2){
		cout<<2;
	}else if(d==r1+r2){
		cout<<1;
	}else{
		cout<<0;
	}
}
