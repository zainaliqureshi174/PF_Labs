#include <iostream>
using namespace std;

void task2();
void task3();
void Array();
int Array[10];
int main()
{
int task;
	cout <<"Select a task to execute:\n";
	cout <<"1. Task 2\t2. Task 3\n";
	cin >>task;
	
	if (task == 2)
	{
		cout <<"1. Task 2: \n\n";
		task2();
	}
	else if (task == 3)
	{
		cout <<"2. Task 3: \n\n";
//		task3();
	}
	else 
	{
		cout <<"Enter a valid number!!!\n";
	}
	return 0;
}
void Array()
{
	Cout <<"Enter 10 integers:\n";
	cin >>Array[10]; 
}
void task2()
{
int count=1;
	Array();
	
	for (int i = 0; i<10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			if (i != j)
			{
				if (Array[i] == Array[j])
				{
					count++;
				}
			}
		}
			cout << "Count for "<<Array[i]<<" is "<<count<<endl;
	}
	
}

