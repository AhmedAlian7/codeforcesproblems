#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// n horizontal and m vertical sticks.
	int n, m; cin >> n >> m;
	
	if (min(n, m) % 2 == 0)
		cout << "Malvika";
	else
		cout << "Akshat";

}
