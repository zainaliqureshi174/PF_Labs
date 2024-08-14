#include <iostream>
using namespace std;

float volumeof( float radius) {
	float volume = (4/3)*3.14*radius*radius*radius;
	cout <<volume<<endl;
return volume;
}

int main() {

float radius;

	cout <<"Enter the radius of sphere to calculate its volume: ";
	cin >> radius;
	cout <<"Volume is: ";
	volumeof(radius);
	
return 0;
}
