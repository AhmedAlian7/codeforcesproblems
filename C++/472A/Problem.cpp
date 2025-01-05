#include <iostream>
using namespace std;
#define ll long long

bool isComposite(int n) {

	if (n <= 3) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return true;
	}
	return false;
}
void theorem(int n) {
	if (n < 12) return;
	int x,y;

	for (x = 4; x < n; x++) {
		y = n - x;

		if (isComposite(x) && isComposite(y))
			break;
	}
	cout << x << " " << y << endl;
}
int main()
{
	int n; cin >> n;
	theorem(n);
	return 0;
}

