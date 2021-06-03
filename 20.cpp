#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	double xA,yA,xB,yB,xC,yC;
	cin >>xA>>yA;
	cin >>xB>>yB;
	cin >>xC>>yC;
	double a = yB-yC,b = xC-xB, c = -a*xB - b*yB;
	cout<<fixed<<setprecision(6)<<(a*xA+b*yA+c)/(sqrt(a*a+b*b));
}
