#include<iostream>
#include<ctime>
using namespace std;

//0
void sumAndProduct(int *arr , int length, int &sum , int &product)
{
	srand(time(0));
	for (int j = 0; j < length; j++)
	{
		arr[j] = rand() % 10;
		sum += arr[j];
		product *= arr[j];
	}
	for (int j = 0; j < length; j++)
	{
		cout << arr[j] << "\t";
	}
}
//1
void sortElements(int *arr,int length,int &SumN,int &SumP,int &SumZ )
{
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		arr[i] = rand() % 10 - 4;
		cout << arr[i] << "\t";
		if (arr[i] < 0)
		{
			SumN++;
		}
		else if (arr[i] > 0)
		{
			SumP++;
		}
		else if (arr[i] == 0)
		{
			SumZ++;
		}

	}
}
//2
void twoDArrays(int **arr , int  size , int &average , int &evens , int &odds)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "\t";
			average+= arr[i][j];
			if (arr[i][j] % 2 == 0)
				evens++;
			else
				odds++;
		}
		cout << endl;
	}
	average /= size*size;
}
////3
void Delete(int *&arr);
//a-
void dynamicMemory(int &size , int *&arr)
{
	
	arr = new int[size];	
}
//b-
void initization(int &size , int *&arr)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
//c-
void draw(int &size,int *&arr)
{
	cout << "Dynamic Array :" <<  endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout<<endl;
}
//d-
void Delete(int *&arr)
{
	delete[]arr;
}
//e-
int* addElementtoEnd(int *arr , int &size)
{
	int num;
	cout << "Enter number that you want to add to end of array :";
	cin >> num;
	int *tempArr = new int[++size];
	for (int i = 0; i < size; i++)
	{
		tempArr[i] = arr[i];
	}
	Delete(arr);
	arr = tempArr;
	arr[size-1] = num;
	return arr;
}
//f-
void addElemnttoIndex(int *&arr , int &size)
{
	int index , num , j = 0;
	cout << "Enter index of element that you want to add :";
	cin >> index;
	cout << "Enter the number you want to add :";
	cin >> num;
	int *tempArr = new int[++size];
	for (int i = 0; i < size; i++)
	{
		if (i == index)
			j++;
		tempArr[j] = arr[i];
		j++;
	}
	Delete(arr);
	arr = tempArr;
	arr[index] = num;
}
//g-
void deleteElemtAtTheIndex(int *&arr, int &size)
{
	int index , j = 0 ;
	cout << "Enter index of element that you to delete :";
	cin >> index;
	int *tempArr = new int[--size];
	for (int i = 0; i < size; i++)
	{
		if (i == index)
			j++;
		tempArr[i] = arr[j];
		j++;
	}
	Delete(arr);
	arr = tempArr;
}