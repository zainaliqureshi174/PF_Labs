#include <iostream>
using namespace std;
int main (){
int a = 0, b = 1;
	cout <<"Enter a positive number : ";
	cin>>a;
		if (a>0)
		{
			for (int i=1; i<=a; ++i)
			{
				b*=i;
			 
			}
				cout << "Fictorial of "<<a<<" is :"<<b<<endl;}
				
		else if (a==0)
				cout<<"Fictorial of 0 = 1\n";
			
		else 
		cout<< "Error! Fictorial of a negative number doesn't exist.\n";
				
return 0;
}
