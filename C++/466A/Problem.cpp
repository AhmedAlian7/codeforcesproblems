#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	short n, m, a, b;
	cin >> n >> m >> a >> b;

	int costBySingleTicket = n * a;

	int costBySpecialTicket = ((n + m - 1) / m) * b;

	int costMixed = (n / m) * b + (n % m) * a;

	cout << min({ costBySingleTicket, costBySpecialTicket, costMixed });

}
