#include <iostream>
using namespace std;
#define ll long long

bool check(ll n)
{
	while (n % 2 == 0)
		n /= 2;
	 
	return (n > 1);

}
int main()
{ 
	int t; cin >> t;
	bool* arr = new bool[t];
	for (int i =0; i < t; i++)
	{
		ll n; cin >> n;
		*(arr + i) = check(n);
	}
	for (int i = 0; i < t; i++)
	{
		if (*(arr + i))
			cout << "YES";
		else
			cout << "NO";
		cout << '\n';
	}

	return 0;
}
