#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t; cin >> t;
	vector <int> v1;
	for (int i = 0; i < t; i++)
	{
		int* arr = new int[4];
		for (int i = 0; i < 4; i++)
			cin >> arr[i];
		short counter = 0;
		for (int i = 1; i < 4; i++)
			if (arr[0] < arr[i])
				counter++;
		v1.push_back(counter);
	}
	for (int i = 0; i < t; i++)
	{
		cout << v1[i] << endl;
	}

}
