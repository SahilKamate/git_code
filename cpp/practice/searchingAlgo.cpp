#include <bits/stdc++.h>
using namespace std;

void linearSearch (int arr[], int n, int key)
{
	for (int i=0; i<n; i++)
	{
		if (arr[i]==key) {cout << "Found at index: " << i << endl; return;}
	}	

	cout << "Not Found" << endl;
}

void sentinalSearch(int arr[], int n, int key)
{
	int last = arr[n-1];
	arr[n-1] = key;

	int i=0;
	while (arr[i]!=key)
		i++;

	arr[n-1] == last;

	if (i<n-1 || arr[n-1]==key) {cout << "Found at index: " << i << endl; return;}
	cout << "Not Found" << endl;
}
void binarySearch(int arr[], int n, int key)
{
	int start =0, end =n-1;

	while (start<=end)
	{
		int mid = start + (end-start)/2;
		if (arr[mid]==key) { cout << "Found at Index: " << mid << endl; return;}
		else if (arr[mid]>key) end =mid-1;
		else start = mid+1;
	}

	cout << "Not Found" << endl;
}

int main()
{
	int n =10;
	int arr[n] = {4, 5, 1, 6, 1, 7, 3, 2, 9, 8};
	int arr1[n] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9};
	int key;
	cin >> key;

	//linearSearch (arr, n, key);
	//binarySearch (arr1, n, key);
	sentinalSearch (arr, n, key);
}
