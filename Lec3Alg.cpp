// Lec3Alg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	/*
	//unsigned int f = 1;
	double f = 1;
	int n = 0;
	//
	do
	{
		cout << "n = ";
		cin >> n;
	} while (n <= 0);
	//
	// n!
	f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	//
	cout << "f = " << f << endl;*/
	


	
	double a;
	double a0;
	double x;
	double eps;
	int n;
	//
	do
	{
		cout << "eps = ";
		cin >> eps;
	} while ((eps <= 0) || (eps > 1));
	//
	n = 1;
	a = 2;
	do
	{
		a0 = a;
		n = n + 1; 
		//
		a = 1;
		x = 1.0 + 1.0 / n;
		for (int i = 0; i < n; i++)
		{
			a = a * x;
		}
	} while (abs(a - a0) > eps);
	//
	cout << "a = " << a << endl;
	cout << "n = " << n << endl;
	cout << "exp(1) = " << exp(1) << endl;


	
	/*unsigned int f0;
	unsigned int f1;
	unsigned int f;
	int n;
	//
	do
	{
		cout << "n = ";
		cin >> n;
	} while (n <= 0);
	//
	f1 = 1;
	f = 1;
	for (int i = 1; i < n; i++)
	{
		f0 = f1;
		f1 = f;
		f = f0 + f1;
	}
	//
	cout << "f = " << f << endl;*/
	



}

