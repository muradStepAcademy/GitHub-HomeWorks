#include<iostream>
#include<time.h>
#include"Functions.h"
using namespace std;

void main()
{
	////0
	//	int sum = 0, product = 1;
	//	int length = 5;
	//	int *arr = new int[length];
	//	sumAndProduct(arr, length, sum, product);
	//	cout << "\n\nSum of massive elements = " << sum << endl;
	//	cout << "Produt of massive elements = " << product << endl;

	////1
	//	int sumN = 0, sumP = 0 , sumZ = 0;
	//	int length = 10;
	//	int *arr = new int[length];
	//	sortElements(arr, length,sumN,sumP,sumZ);
	//	cout << "\nSum of positiv elements of massive : " <<sumP<< endl;
	//	cout << "Sum of negative elements of massive : " << sumN << endl;
	//	cout << "Sum of zeros elements of massive : " << sumZ << endl;

	////2
	//int size ;
	//cout<<"Enter size of array :";
	//cin>>size;
	//int average = 0 , evens = 0 , odds = 0;
	//int **arr = new int*[size];

	//for (int i = 0; i < size; i++)
	//	arr[i] = new int[size];

	//twoDArrays(arr, size, average, evens, odds);
	//cout << "\nAverage of array elements : " << average << endl;
	//cout << "Average of odd elements : " << odds << endl;
	//cout << "Average of even elements : " << evens << endl;

	////4
	int size , *arr;
	cout << "Enter the size of array you want to create: ";
	cin >> size;
	dynamicMemory(size, arr);
	initization(size, arr);
	draw(size, arr);
	arr = addElementtoEnd(arr, size);
	draw(size, arr);
	addElemnttoIndex(arr,size);
	draw(size, arr);
	deleteElemtAtTheIndex(arr, size);
	draw(size, arr);
	Delete(arr);
}