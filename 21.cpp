#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int pos = 1+t;
	switch(t%4){
		case 1:
			cout<<"0 "<<pos;
			break;
		case 0:
			cout<<pos<<" 0";
			break;
		case 3:
			cout<<"0 "<<-pos;
			break;
		default:
			cout<<-pos<" 0";
	}
}
