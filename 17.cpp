#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double denta = b*b - 4*a*c;
	if(denta <0)
		cout<<"Vo nghiem";
	else if(denta ==0){
		double res = -b/(2*a);
		cout<<fixed<<setprecision(3)<<res<<" "<<res;
	}
	else{
		double res1 = (-b + sqrt(denta))/(2*a);	
		double res2 = (-b - sqrt(denta))/(2*a);	
		cout<<fixed<<setprecision(3)<<res2<<" "<<res1;
	}
}
