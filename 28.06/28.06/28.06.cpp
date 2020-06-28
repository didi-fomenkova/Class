#include <iostream>

using namespace std;

int main()
{
	int a[117]{ 0 };
	int maxSum = -1;
	int count = 0;
	int el1 = 0;
	int el2 = 0;

	cin >> count;
	int number = 0;

	for (int i = 0; i < count; ++i)
	{
		cin >> number;

		if (number % 117 != 0)
		{
			if (number < a[117 - number % 117] && number + a[117 - number % 117] > maxSum)
			{
				maxSum = number + a[117 - number % 117];
				el1 = a[117 - number % 117];
				el2 = number;
			}

			if (number > a[number % 117])
			{
				a[number % 117] = number;
			}
		}
		else
		{
			if (number < a[0] && maxSum < number + a[0])
			{
				maxSum = number + a[0];
				el1 = a[0];
				el2 = number;
			}

			if (number > a[0])
			{
				a[0] = number;
			}		
		}
	}

	if (maxSum == -1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << el1 << " " << el2 << endl;
	}

	return 0;
}