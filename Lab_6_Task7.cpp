#include <iostream>
using namespace std;
int main(){
int a;
	cout << "Enter the number of days you are late : ";
	cin >> a;
		if ((a>=1)&&(a<=7))
		
			cout << "Your fine is 10PKR.\n";	
			
		else if ((a>=8)&&(a<=14))
		
			cout << "Your fine is 20PKR.\n";
			
		else if ((a>14)&&(a<=31))

			cout << "Your fine is 50PKR.\n";	
		
		else 
		
			cout << "You are not anymore member of Library.\n";
return 0;
}
