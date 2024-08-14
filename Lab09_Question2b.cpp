#include <iostream>
using namespace std;
int main (){
	int rows;
	cout<<"Enter rows: ";
	cin>>rows;
	
	int i =1;
	do{
	
	int j=1;
	do{
		cout<<"*";
		j++;
	}while(j<=i);
	
	cout<<endl;
	
	i++;
	}while(i<=rows);
	
return 0;
}
