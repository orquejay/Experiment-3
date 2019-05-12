#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int Arr[10], n, i, small, large, sum = 0;
	float average;

	n = 10;

	for (i = 0; i < n; i++)
	{
		cout << "Enter Number " << i + 1 << ":";
		cin >> Arr[i];
	}

	small = Arr[0];
	large = Arr[0];

	for (i = 1; i < n; i++)
	{
		if (Arr[i] < small)
			small = Arr[i];
		if (Arr[i] > large)
			large = Arr[i];
	}

	for (i = 0; i < n; i++)
	{
		sum += Arr[i];
	}

	average = (float)sum / n;

	cout << "\nLargest Integer is:" << large;
	cout << "\nSmallest Integer is:" << small;

	cout << "\nTotal: " << sum << endl;
	cout << "Average: " << average;

	_getch();
	return 0;
}