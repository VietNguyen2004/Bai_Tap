#include<iostream>
using namespace std;
int main(){
	int s ;
	cin>>s;
	int k = 0;
	int res = 0;
	while (k<s){
		res ++;
		k+= res;
	}
	cout<<res;
}
