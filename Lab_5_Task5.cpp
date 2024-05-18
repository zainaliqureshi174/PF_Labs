#include <iostream>
using namespace std;
int main(){
int x;
	cout << "Enter a number = ";
	cin >>x;
	switch ((x % 5== 0 )&&(x % 11== 0 )){
		case 1 :
		cout<<"Number is divisible by 5 and 11\n";
		break;
		case 0 :
		cout<<"Number is not divisible by 5 and 11\n";
		break;
		
	}
return 0;
}
