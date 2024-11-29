#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int value(int a, int b)
{
	if (a == b)
		return 0;
	return ceil((abs(a - b)) / 10.0f);
}
int main()
{ 
	int n; cin >> n;
	int *arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		int a, b; 
		cin >> a >> b;
		*(arr + i) = value(a, b);
	}
	for (size_t i = 0; i < n; i++)
	{
		printf("%d\n", *(arr + i));
	}

	return 0;
}
