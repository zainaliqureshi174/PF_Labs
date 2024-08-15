#include <iostream>
using namespace std;

void Task2();						//Prompt for function of Task2
void Task3();						//Prompt for function of Task3
void Task5();						//Prompt for function of Task5
void Task8();						//Prompt for function of Task8

int main(){
int num;
	cout <<"Press number of task: ";
	cin >> num;
	
	if (num == 2){
		cout <<"Task 2:\n\n";
		Task2();
	}
	else if (num == 3){
		cout <<"Task 3:\n\n";
		Task3();
	}
	else if (num == 4){
		cout <<"Task 4:\n\n";
		Task4();
	}
	else if (num == 5){
		cout <<"Task 5:\n\n";
		Task5();
	}
	else if (num == 6){
		cout <<"Task 6:\n\n";
		Task6();	
	}
	else if (num == 7){
		cout <<"Task 7:\n\n";
		Task7();
	}
	else if (num == 8){
		cout <<"Task 8:\n\n";
		Task8();
	}
	else if (num == 9){
	
	}
	else {
		cout <<"Enter a valid task number!!";
	}
	return 0;
}

void Task2(){								//Task2 
int sum=0, Max=0;
float average=0;
int values[5];
	for (int i=0; i<5; i++){
		cout <<"Enter intiger value# "<<i+1<<"   ";
		cin >> values[i];
	}
	for (int j=0; j<5; j++){
		sum =sum+values[j];
	}
	average=sum/5;	
	cout <<"Average of total numbers is: "<<average<<endl;		//Average
	
	for (int i=0; i<5; i++){
		if (Max<values[i]){
			Max=values[i];
		}
	}
	cout <<"Maximum number entered is: "<<Max<<endl;		//Maximum number
	
	int Min=Max;
	for (int i=0; i<5; i++){
		if (Min>values[i]){
			Min=values[i];
		}
	}
	cout <<"Minimum number entered is: "<<Min<<endl;		//Minimum number
}

void Task3(){								//Task3
int my_array[]={13, 99, 6, 76, 11, 83, 8, 67, 66, 22, 96, 46, 21, 65, 48, 22, 28, 11, 83, 87, 10};
	cout <<"My original array is:  ";
	for (int i=0; i<21; i++){
		cout<<my_array[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"Reverse of My array is: ";
	for (int i=20; i>=0; i--){
		cout<<my_array[i]<<" ";
	}
}

void Task8(){								//Task8
int rate[]={1500000, 140000, 130000, 120000, 110000, 100000, 90000};
int Max=0;
	cout<<"Rate List for 7 days of week is as under: \n\n";
	cout<<"Day 1 =\t"<<"1500000\n";
	cout<<"Day 2 =\t"<<"140000\n";
	cout<<"Day 3 =\t"<<"130000\n";
	cout<<"Day 4 =\t"<<"120000\n";
	cout<<"Day 5 =\t"<<"110000\n";
	cout<<"Day 6 =\t"<<"100000\n";
	cout<<"Day 7 =\t"<<"90000\n\n";
	for (int i=0; i<7; i++){
		if (Max<rate[i]){
			Max=rate[i];
		}
	}
	for (int i=0; i<7; i++){
		if(Max==rate[i]){
			cout <<"Best day for selling the property is Day "<<i+1<<endl;
			}
	}
	int Min=Max;
		for (int i=0; i<7; i++){
			if (Min>rate[i]){
				Min=rate[i];
			}
	}
	for (int i=0; i<7; i++){
		if(Min==rate[i]){
			cout <<"Best day for Buying the property is Day "<<i+1<<endl;
			}
	}
	
}
