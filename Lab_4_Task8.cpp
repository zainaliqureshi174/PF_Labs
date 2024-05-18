#include <iostream>
using namespace std;
int main(){
int x, a, b, c, y;
	cout<<"Enter a four-digit number = ";
	cin>>x;
	y=x%10;
	a=(x/10)%10;
	b=(x/100)%10;
	c=(x/1000);
	x=(y*10)+a;
	x=(x*10)+b;
	x=(x*10)+c;
	cout<<x<<endl;
	
	

return 0;
}
