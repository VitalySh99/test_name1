#include <iostream>
using namespace std;

void SortVstavka(int arr[], int N)
{
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
}
int main()
{
	int i, N, arr[N];
	cin >> N;
	for (i = 0; i < N; i++)
	cin >> arr[i];

	SortVstavka(arr, N);
	for (i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
