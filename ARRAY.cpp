#include <iostream>
#include "ARRAY.h"

using namespace std;

ARRAY::ARRAY(int t[],int m)
{
	n = m;
	for (int i = 0; i < m; i++)
		a[i] = t[i];
}

int ARRAY::sum(int x)
{
	int i = x;
	int sum = 0;
	while (i) {
		sum += i % 10;
		i /= 10;
	}
	return sum;
}

void ARRAY::fun()
{
	int k;
	for (int i = 0; i < n - 1; i++) {
		k = i;
		for (int j = i + 1; j < n; j++)
			if (sum(a[k]) > sum(a[j]))
				k = j;
		swap(a[i], a[k]);
	}
}

void ARRAY::print()
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}