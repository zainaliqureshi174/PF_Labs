#include <iostream>
using namespace std;
int main(){
   int x,y;
   char z;
   cout<<"Enter 1st number = ";
   cin>>x;
   cout<<"Operator";
   cin>>z;
   cout<<"Enter 2nd number = ";
   cin>>y;
   switch (z){
   	case '+' :
   	cout<<x<<" + "<<y<<" = "<<(x+y)<<endl;
   	break;
   	case '-' :
   	cout<<x<<" - "<<y<<" = "<<(x-y)<<endl;
   	break;
   	case '*' :
   	cout<<x<<" * "<<y<<" = "<<(x*y)<<endl;
   	break;
   	case '/' :
   	cout<<x<<" / "<<y<<" = "<<(x/y)<<endl;
   	break;
   	default:
   	cout<<"Invalid operation\n";
   	}
   
return 0;
}
