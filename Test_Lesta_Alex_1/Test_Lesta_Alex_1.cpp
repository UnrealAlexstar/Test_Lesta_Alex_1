#include <iostream>
#include <cstdlib>

using namespace std;

bool isEven(int value)
{
	div_t result = div(value, 2);
	cout << "Integer: " << result.quot << endl;
	cout << "Remains: " << result.rem << endl;
	return !result.rem;
}

int main()
{
	int num;
	cout << "Enter the number: ";
	cin >> num;

	if (isEven(num))
	{
		cout << num << " - YES";
	}
	else
	{
		cout << num << " - NO";
	}
}
