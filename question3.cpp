#include<iostream>
using namespace std;
int main()
{
	int input[10];
	int i = 0;
		
	while (i < 10)
	{
		cout << "Enter Value for Position " << i << " : ";
		cin >> input[i];
		i++;
	}
	
	int sum = 0;
	for (i = 0; i <= 9; i++)
	{
		sum += input[i];
	}
	
	cout <<endl
		<<"Sum of all nums: " 
		<<sum
		<<endl
		<<"Average of all nums: "
		<<sum / 10
		<<endl
		<<endl;
	
	int psum = 0;
	int count = 0;
	int nsum = 0;
	int ncount = 0;
	for (i = 0; i <= 9; i++)
	{
		if (input[i] > 0)
		{
			psum += input[i];
				count++;
		}
		else
		{
			nsum += input[i];
				ncount++;
		}
	}
	cout << "Sum of positive nums: "
		<< psum
		<< endl
		<< "Average of positive nums: "
		<< psum / count
		<<endl
		<<endl;

	cout << "Sum of negative nums: "
		<< nsum
		<< endl
		<< "Average of negative nums: "
		<< nsum / ncount
		<<endl
		<<endl;

	return 0;
}
