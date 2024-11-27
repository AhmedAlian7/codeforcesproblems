#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{ 
	// Sereja moves first.
	int n; cin >> n;
	vector <int> v1(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v1[i];
	}
	int Sereja = 0, Dima = 0;
	int* ptr1 = &v1[0], * ptr2 = &v1[n - 1]; // 4 1 2 10 8
	bool SerejaTurn = true;
	while (ptr1 <= ptr2)
	{
		if (*ptr1 > *ptr2)
		{
			if (SerejaTurn)
				Sereja += *ptr1;
			else
				Dima += *ptr1;
			ptr1++;
		}
		else
		{
			if (SerejaTurn)
				Sereja += *ptr2;
			else
				Dima += *ptr2;
			ptr2--;
		}
		
		SerejaTurn = !SerejaTurn;
	}
	printf("%d %d", Sereja, Dima);

	return 0;
}
