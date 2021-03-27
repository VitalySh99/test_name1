#include <iostream>
using namespace std;

int main()
{
	const int N = 8;
	int arr[N] = { 7, 2, 9, 4, 11, 3, 5, 1 };

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

		for (int i = 1; i < N; i++)
		{
			int k = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > k)
			{
				arr[j + 1] = arr[j];
				arr[j] = k;
				j--;
			}
		}

	for (int p = 0; p < N; p++)
	{
		cout << arr[p] << " ";
	}
	cout << endl;
}
