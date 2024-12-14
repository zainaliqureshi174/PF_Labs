#include <iostream>
using namespace std;
int main(){
int a;
double x;
	cout<<"Enter distance : ";
	cin>>a;
		if ((a>=0)&&(a<=100))
			{
				x = 5.00;
				cout<<"Cost is : "<<x<<endl;
			}
		else if ((a>100)&&(a<=500))
			{
				x = 8.00;
				cout<<"Cost is : "<<x<<endl;
			}
		else if ((a>500)&&(a<1000))
			{
				x = 10.00;
				cout<<"Cost is : "<<x<<endl;
			}
		else if (a>=1000)
			{
				x = 12.00;
				cout<<"Cost is : "<<x<<endl;
			}
return  0;
}
