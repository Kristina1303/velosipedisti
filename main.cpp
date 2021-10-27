#include <iostream>
using namespace std;

int main()
{
	int time[100];
	int number[100];
	int n;
	cout << "Enter how many participants are in the competition" << endl;
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		number[j] = j + 1;
		
	}
	for (int i; i < n; i++)
	{
		cout << "time[" << i << "]=" << endl;
		cin >> time[i];
	}
	for (int i; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{

			if (time[i] < time[i + 1])
			{
				swap(time[i], time[i + 1]);
				swap(number[j], number[j + 1]);
			}
		}
	}
	for (int k = 0; k < 3; k++)
	{
		cout << time[k] << "-" << number[k] << endl;
	}
	return 0;
}