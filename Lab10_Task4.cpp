#include <iostream>
using namespace std;

int num;

int timesHundred(int num) {
	int product = num *100;
	cout <<product<<endl;
	return product;
}

int main () {
	
	cout <<"Enter a number to multiply it by 100: ";
	cin >> num;
	cout <<"Product of this number with 100 is: ";
	timesHundred(num);
	
	return 0;
}

