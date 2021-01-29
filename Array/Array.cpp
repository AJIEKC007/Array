
#include <iostream>
using namespace std;

int main()
{
	int const s = 5;
	int arr[s];
	int sum=0;
	int x;

	for (int i = 0; i < s; i++)
	{
		cout << "Vvedite chislo : ";
		cin >> x;
		arr[i] = x;
		
	}
	cout << endl;

	for (int i = 0; i < s; i++)
	{

		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < s; i++)
	{
		sum += arr[i];
	
		cout << sum<<" ";
	}


}

