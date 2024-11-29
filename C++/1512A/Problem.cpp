#include <iostream>
#include <vector>
using namespace std;

int value(int n) // 11 13 11 11
{
	vector <int> a(n);
	for (size_t i = 0; i < n; i++)
		cin >> a[i];

	if (a[0] != a[1] && a[0] != a[2])
		return 1;
	if (a[1] != a[0] && a[1] != a[2])
		return 2;

	for (int i = 2; i < n; i++) 
	{
		if (a[i] != a[i - 1])
			return ++i;
	}

}
int main()
{ 
	int t; cin >> t;
	vector <int> vec(t);
	for (size_t i = 0; i < t; i++)
	{
		int n; cin >> n;
		
		vec[i] = value(n);
	}
	for (size_t i = 0; i < t; i++)
	{
		printf("%d\n", vec[i]);
	}

	return 0;
}
