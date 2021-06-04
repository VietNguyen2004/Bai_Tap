#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
const double PI = acos(-1);
int main(){
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a2<=b1){
		cout<<0;
	}else if(a1>=b1 && a2<=b2){
		cout<<a2-a1;
	}else if(b1<=a1 && b2<=a2){
		cout<<b2-b1;
	}else{
		cout<<a2-b1;
	}
}
