#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
const double PI = acos(-1);
int main(){
	double xA,yA,xB,yB;
	cin>>xA>>yA>>xB>>yB;
	if(fabs(xA-xB)==fabs(yA-yB)){
		double r = fabs(xA-xB)/2;
		cout<<fixed<<setprecision(3)<<r*r*PI;
	}else{
		double r = sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB))/2;
		cout<<fixed<<setprecision(3)<<r*r*PI;
	}
}
