// ArrayDividers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n = ";
	cin >> n;

	int k = 100;

	int* arr = new int[n];
	int* div = new int[k];
	int* chast = new int[k];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		chast[i] = 0;
		div[i] = 0;
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		//bool isElem = false;

		for (int k = 1; k <= arr[i]; k++)
		{
			if (arr[i] % k==0)
			{
				//cout << "\tarr[i] = " << arr[i] << "\tk = " << k << endl;

				bool isElem = false;

				for (int j = 0; j < count; j++)
				{
					if (k == div[j])
					{
						isElem = true;
						chast[j]++;
						break;
					}
				}

				if (!isElem)
				{
					div[count] = k;
					cout << "div" << div[count] << endl;
					chast[count]++;
					count++;

				}

				cout << "\t\tcount = " << count << endl;
	

				cout << "\tarr[i] = " << arr[i] << "\tk = " << k << "\tdiv[count] = " << div[count] << "\tchast[count] = " << chast[count] << endl;
			}
		}

	}

	cout << "The array of dividers:" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << div[i] << " ";
	}
	cout << endl;

	cout << "The array of frequency:" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << chast[i] << " ";
	}
	cout << endl;

}

