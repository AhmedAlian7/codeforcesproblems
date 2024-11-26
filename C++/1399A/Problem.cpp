#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &a)
{
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size() - 1; i++)
		if (a[i + 1] - a[i] > 1)
			return false;
	return true;
}

int main()
{
	int t; cin >> t;
	vector <bool> result(t);
	for (int i = 0; i < t; i++)
	{
		int n; cin >> n;
		vector <int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		result[i] = isPossible(a);
	}
	for (int i = 0; i < t; i++)
		if (result[i])
			cout << "YES\n";
		else
			cout << "NO\n";


}
