#include <iostream>
using namespace std;
int main(){
char ch;
	cout<<"Enter a character : ";
	cin>>ch;
		switch ((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
		{
			case 1: 
				cout<<"It is an alphabet.\n";
				break;
			
			case 0:
				switch ((ch>='0')&&(ch<='9'))
				{
					case 1:
						cout<<"It is a digit.\n";
						break;
					case 0:
						cout<<"It is a special character.\n";
						break;
				}}
				
		
		

return 0;
}
