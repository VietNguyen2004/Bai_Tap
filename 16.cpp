#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double a,b;
	cin>>a>>b;
	if(a==0)
		cout<<"Vo so nghiem";
	else
		cout<<fixed<<setprecision(3)<<-b/a;
	return 0;
}
