#include<iostream>
#include<stdio.h>
using namespace std;
void p_lead(int arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		int j;
		for (j = i+1; j < size; j++)
		{
			if (arr[i] < arr[j])
				break;
		}
		if (j == size)
			cout << arr[i] << " ";
}
}
int main()
{
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	p_lead(arr, n);
	return 0;
}
