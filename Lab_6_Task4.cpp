#include <string>
#include <iostream> 
using namespace std;
int main(){
    float x1, y1, x2, y2, x3, y3, m1, m2;
    string result = (m1==m2)?"These three points lie on a single straight line.\n":"Not lie on single straight line.\n";
 	cout <<"Enter coordinates x1, y1 : ";
 	cin>>x1>>y1;
 	cout <<"Enter coordinates x2, y2 : ";
 	cin>>x2>>y2;
 	cout <<"Enter coordinates x3, y3 : ";
 	cin>>x3>>y3;
 	m1=((y2-y1)/(x2-x1));
 	m2=((y3-y2)/(x3-x2));
       cout<<result;
return 0;
}
