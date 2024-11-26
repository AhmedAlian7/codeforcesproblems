#include <iostream>
#include <vector>
using namespace std;

char PlusOrMinus(int a, int b, int c)
{
	if (a + b == c)
		return '+';
	else if (a - b == c)
		return '-';
	else
		return ' ';
}

int main()
{
	int n; cin >> n;
	vector <char> v1(n);
	for (int i = 0; i < n; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v1[i] = PlusOrMinus(a, b, c);
	}
	for (int i = 0; i < n; i++)
		cout << v1[i] << endl;

}
