#include <iostream>
using namespace std;
int main(){
int x, a;
	cout<<"Enter the purchase price";
	cin>>x;
		if (x>2000){
			cout <<"Congratulations! You have a discount of 10%.\n";
			a=x*0.1;
			a=x-a;
			cout<<"Your discounted bill is : \n"<<a;}
		else {
			cout<<"Sorry1 You didn't got discount.\n";}
return 0;
}
