#include <iostream>
using namespace std;
#define ll long long

int HowManyProblems(int n, int minutes)
{
	int c = 0, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i * 5;
		if (sum > minutes)
			break;

		c++;
	}
	return c;
}
int main()
{
	// it will take him 5·i minutes to solve the i-th problem
	// needs k minutes to get there from his house

	// How many problems can Limak solve if he wants to make it to the party?

	int n, k;
	cin >> n >> k;

	int minutes = 60 * 4 - k;

	cout << HowManyProblems(n,minutes);

	return 0;
}
