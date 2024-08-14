#include <iostream>
using namespace std;
int main (){

	int rows =1 ;
	cout<<"Enter number of rows: ";
	cin>>rows;
	
	int i = 1;
	while(i<=rows)
	{
	
	int x =rows-i , f =1;
	
	while(f<=x)
	{       
		cout<<" ";
		f++;
	}
	int j = ((i*2)-1) , l=1;
	while(l<=j)
	{	
		cout<<"*";
		l++;
	}
	cout<<endl;
	
	i++;
	}

return 0;
}
