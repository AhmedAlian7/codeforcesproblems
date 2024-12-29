#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long



bool isPrime(ll num)
{

	for (ll i = 2; i*i <= num; i++)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
bool isT_Prime(ll num) // A square of a prime p2 has exactly three divisors : 1, p, and p2
{
	if (num < 2) return false;
	ll root = sqrt(num);
	return (root * root == num && isPrime(root));
}
int main()
{
	// Т - prime, if t has exactly three distinct positive divisors.

	
	int n; cin >> n;
	vector<ll> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (isT_Prime(vec[i]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
