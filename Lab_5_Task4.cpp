#include <iostream>
using namespace std;
int main(){
float x;
	cout<<"Enter your percentage = ";
	cin>>x;
	if (x>=90){
	cout<<"Grade A\n";}
	else if (x>=80){
	cout<<"Grade B\n";}
	else if (x>=70){
	cout<<"Grade C\n";}
	else if (x>=60){
	cout<<"Grade D\n";}
	else if (x>=40){
	cout<<"Grade E\n";}
	else if (x<40){
	cout<<"Grade F\n";}
	else {
	cout<<"Invalid\n";}

return 0;
}
