#include <iostream>
using namespace std;
int main (){
int a, sum = 0, count = 0, b;

	cout << "Enter a number : ";
	cin >> a;
	
		for (int i = 0; i <= a; i++)
		{	
			if (i%2==0)
			{
				sum += i;
				count++;	
				
			}
			
		}
		
		
		b= sum/count;
	
	cout << "Sum till : "<< a <<endl ;
	cout << "Sum is : " << sum << endl;
	cout << "Average is : " << b<<endl;
	
return 0;
}
