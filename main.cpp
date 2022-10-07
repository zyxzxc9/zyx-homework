#include <iostream>
#include "ARRAY.h"

using namespace std;

#define N 6

int main()
{
	int arr[N];
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	ARRAY A(arr, N);
	A.fun();
	A.print();
	return 0;
}