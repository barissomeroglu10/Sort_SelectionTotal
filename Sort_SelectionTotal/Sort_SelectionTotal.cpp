/*
In this code, we will get array A and B from user and use selection sort to order. Then, we will use sorted array A and B
to total of each index and assing them for array C.

Developer: Barış Someroğlu
Date: 22.01.2024 / 3:30 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp1, temp2;

	// get array size from user
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n), B(n), C(n);

	cout << endl;

	// get value for array from user
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter Value for " << i + 1 << ". Element of array A: ";
		cin >> A[i];

		cout << "Please Enter Value for " << i + 1 << ". Element of array B: ";
		cin >> B[i];
	}

	cout << endl;

	// write entered array A
	cout << "Entered Array A: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	// write entered array B
	cout << "Entered Array B: ";

	for (int i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}


	// use selection sort for array A
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (A[j] < A[i])
			{
				temp1 = A[i];
				A[i] = A[j];
				A[j] = temp1;

				// swap(A[i],A[j]);
			}
		}
	}

	cout << endl;

	// write sorted array A
	cout << "Sorted array A is: ";

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	// use selection sort for array B
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (B[j] < B[i])
			{
				temp2 = B[i];
				B[i] = B[j];
				B[j] = temp2;

				// swap(B[i],B[j]);
			}
		}
	}

	cout << endl;

	// write sorted array B
	cout << "Sorted array B is: ";

	for (int i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}

	// make total to have array C
	for (int i = 0; i < n; i++)
	{
		C[i] = A[i] + B[i];
	}

	cout << endl;

	// write array C on the screen
	cout << "Total array is: ";

	for (int i = 0; i < n; i++)
	{
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}