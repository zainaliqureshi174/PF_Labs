#include <iostream>
#include <cmath>
#include <string>

using namespace std;
//arr has 3 things data type, 0th index address, and size

//*p gives value
//p gives address

//int **array = new int *[R]
//for ()
//array[i] = new int[C]

void Task1();
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();

float Euclidean_Norm(int arr[][2]);
int Sum_lower_triangle(int *arr[3],int x);

int main()
{

int task = 0;
	cout <<"Select Task to be executed BETWEEN 1 - 6:\n";
	cin >> task;
	
	if (task >= 1 && task <= 6)
	{
		if (task == 1)
		{
			Task1();
		}
		else if (task == 2)
		{
			Task2();
		}
		else if (task == 3)
		{
			Task3();
		}
		else if (task == 4)
		{
			Task4();
		}
		else if (task == 5)
		{
			Task5();
		}
		else if (task == 6)
		{
			Task6();
		}
		
		
	}
	else 
	cout <<"Enter a valid Task number!!!\n";
	
	return 0;
}

//____________________________________________________________________________

	//Task 1 below
	
void Task1()
{
	// reverse of array by using pointers	
	int arr[5];
	int *p = arr;
	cout <<"Enter the value of Array.\n";
	
	for (int i = 0; i < 5; i++)
	{
			cout <<"Array["<<i<<"]= ";
			cin >> p[i];
	}
	
	cout <<"\n\nArray in Original order.\n";
	for (int i = 0; i < 5; i++)
	{
			cout << *(p+i)<<" ";
	}
	
	cout << "\n\nArray in reverse order.\n";
	for (int i = 4; i >= 0; i--)
	{
		cout << p[i] << " " ;
	}
	cout << endl ;
}

//_______________________________________________________________________________

	//Task 2 below
	
void Task2()
{
	/*Find individual sum of each row of the 2D array (take values from user )and store corresponding result in 1D array (dynamically allocated, and delete it at the end of this task) i.e. sum of all the elements of row 0 should be stored in 1st element of 1D array, similarly sum of all elements of the second row of 2D array should be stored at the second index of 1D array. Display the final sum array (i.e. 1D array). Think about the size of 1D array yourself.*/

int m = 0, n = 0;	
	
	cout << "Enter the order of matrix.(rows(m) x columns(n))\n";
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	
	
int arr[m][n];

	cout <<"\nEnter the entries of matrix of order "<<m<<" x "<<n<<": \n";
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Your original matrix is:\n";
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] <<" ";
		}
		cout << endl;
	}

	
int *p = new int[m];
int sum = 0;	
	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < n; l ++)
		{	
			sum += arr[k][l];
		}
		p[k] = sum;
		sum = 0;
	}
	
	
        cout << "Your new array is:\n";
	
	for (int i = 0; i < m; i++)
	{
			cout << p[i] <<" ";
	}
	cout << endl;
	
		delete[] p;
	
}
//_______________________________________________________________________________
	
	//Task 3 below

void Task3()
{

/*Write a program to declare a 3x3 integer type array (matrix) dynamically and
store values by taking input from user. Find Sum of lower triangle for this matrix.*/

int arr[3][3];
	cout << "Enter the values in matrix:\n";
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Your matrix is:\n";
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Your matrix2 is:\n";
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << sum << endl;
}



//______________________________________________________________________________

	//Task 4 below
	
void Task4()
{
	
/*Modify problem 3 in such a way that you have to make a function named
“Sum_lower_triangle” which takes the 2D array(3x3 integer type array (matrix)
dynamically) as an argument, calculates the Sum of lower triangle and return the
result to main as output.*/

int **matrix = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		matrix[i] = new int[3];
	}
	cout << "This program returns you the sum of lower triangle of given matrix.\n\n";
	
	cout << "Enter the entries of a 3 x 3 matrix:\n";
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}
	
	cout << "Your matrix is:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

int sum = 0;

	sum = Sum_lower_triangle(matrix,3);
	cout << "Sum of the lower triangle of your matrix is " << sum << endl;
	
	for (int i = 0; i < 3; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

}

int Sum_lower_triangle(int *arr[3],int x)
{	
int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += arr[i][j];
		}
	}
	
	return sum;
}

//______________________________________________________________________________

	//Task 5 below
	
void Task5()
{
	char sen[20];
	cout << "Enter your string. Enter a period to end.\n";
	int j = 0;
	while (true)
	{
		cin >> sen[j];
		if (sen[j] == '.')
		{
			break;
		}
		
		j++;
		
	}
	
//	for (int i = 0; i <= j; i++)
		cout << sen;
	cout << endl;
}

//_______________________________________________________________________________

	//Task 6 below

void Task6()
{

int matrix[2][2];
	cout << "Enter entries of a 2x2 matrix.\n";
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j ++)
		{
			cin >> matrix[i][j];
		}
	}

float norm = 0;	

	norm = sqrt(Euclidean_Norm(matrix));
	
	cout << "Euclidean norm of Your matrix is: " << norm << endl;
}


float Euclidean_Norm(int arr[][2])
{

	cout << "Your entered matrix is:\n";
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j ++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	int sum = 0;
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			sum += (arr[i][j] * arr[i][j]);
		}
	}
	
	return sum;
}
