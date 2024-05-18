#include <iostream>
using namespace std;
int main(){
int a, b;
	cout << "Enter two numbers : ";
	cin>>a>>b;
		switch (a!=b)
		{
			case 1:
				a=a^b;
				b=a^b;
				a=a^b;
				cout<<"1st num : "<<a<<endl<<"2nd num : "<<b<<endl;
			break;
			case 0:
				cout<<"Numbers are same.\n";
		}		
return 0;
}
