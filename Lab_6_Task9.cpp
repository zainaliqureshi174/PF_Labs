#include <iostream>
using namespace std;
int main(){
int a;
bool b;
	cout << "Enter year : ";
	cin>>a;
		if ((a%4==0)||((a%100==0)&&(a%400==0)))
			cout<< (b = true) <<endl ;
		else 
			cout<< (b = false) <<endl ;
return  0;
}
