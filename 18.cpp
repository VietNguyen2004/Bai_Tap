#include<iostream>
using namespace std;

int main(){
	unsigned short m,y;
	cin>>m>>y;
	bool nhuan = y%400==0 || (y%4==0 && y%100!=0);
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<31;
			break;
		case 2:
			if(nhuan)
				cout<<29;
			else
				cout<<28;
			break;
		default :
			cout<<30;
	}
}
