#include <iostream>
using namespace std;
int main(){
int x, y, a, b, c, d, e;
	cout<<"Enter a five digit number = ";
	cin>>x;
	y=x%10;
	a=(x/10)%10;
	b=(x/100)%10;
	c=(x/1000)%10;
	d=(x/10000);
	e=(y+a+b+c+d);
	cout<<"Addition of digits of "<<x<<" is = "<<e<<endl;
return 0;
}
