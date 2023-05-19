#include <bits/stdc++.h>
using namespace std;
#define SIZE 50

int arr[SIZE];
int rank[SIZE] = {0};

void inititalize()
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = i;
}

int findNumber(int x)
{
	while (arr[x] != x)
	{
		arr[x] = arr[arr[x]];
		rank[arr[x]]--;
		x = arr[x];
	}
	return x;
}

void unionSet(int a, int b)
{
	int x = findNumber(a);
	int y = findNumber(b);

	if (x == y)
		return;

	if (rank[x] > rank[y])
		arr[y] = x,
		rank[x]++;
	else
		arr[x] = y;

}

int main()
{
	inititalize();
	unionSet(9, 0);
	unionSet(0, 3);
	unionSet(3, 5);
	return 0;
}