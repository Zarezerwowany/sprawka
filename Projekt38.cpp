#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {


	int n, p, k, j;
	cout << "Liczba pieter: ";
	cin >> n;
	cout << endl;
	for (int i = 1; i <= n - 1; i++)
	{
		for (k = 1; k <= n - i - 1; k++)
		{
			cout << " ";
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (p = 1; p <= n - 2; p++)
	{
		cout << " ";
	}
	cout << "*";
	char znak;
	cin >> znak;
}

