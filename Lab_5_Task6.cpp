#include <iostream>
using namespace std;
int main(){
int x;
	cout<<"Enter a number = ";
	cin >> x;
	if ((x%5)==0){
	x=3*x;
	x=x+1;
	cout<<"(Entered num * 3) + 1 = "<<x<<endl;
	}
	else {
	x=x/2;
	cout<<"Entered num / 2 = "<<x<<endl;
	}
return 0;
}
