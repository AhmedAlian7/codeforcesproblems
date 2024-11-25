#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

short getMedium(short arr[3])
{
	if ((arr[0] > arr[1] && arr[0] < arr[2]) || (arr[0] < arr[1] && arr[0] > arr[2]))
		return arr[0];

	if ((arr[1] > arr[0] && arr[1] < arr[2]) || (arr[1] < arr[0] && arr[1] > arr[2]))
		return arr[1]; 

	if ((arr[2] > arr[0] && arr[2] < arr[1]) || (arr[2] < arr[1] && arr[2] > arr[0]))
		return arr[2];
}

int main()
{
	short t;
	cin >> t;
	vector <short> v1(t);
	for (short i = 0; i < t; i++)
	{
		short arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		v1[i] = getMedium(arr);
	}
	for (short i = 0; i < t; i++)
	{
		cout << v1[i];
	}

}
