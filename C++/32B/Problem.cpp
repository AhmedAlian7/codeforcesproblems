#include <iostream>
using namespace std;

int main()
{ 
	string code; cin >> code;
	string result = "";
	for (int i =0; i < code.length(); i++)
	{
		if (code[i] == '.')
			result += "0";
		else if (code[i] == '-')
		{
			if (code[i +1] == '.')
				result += "1";
			else if (code[i + 1] == '-')
				result += "2";
			i++;
		}
	}
	cout << result;

	return 0;
}
