#include <iostream>
using namespace std;
#define ll long long


int minShovels(int k, int r) // 15 2
{
	int i = 0;
	while (++i)
	{
		int last_digit = (k * i) % 10;
		if (last_digit == r || last_digit == 0)
			return i;
	}
	return -1;
}
int main()
{
	
	int k, r; cin >> k >> r;
	cout << minShovels(k, r) << endl;
	return 0;
}
