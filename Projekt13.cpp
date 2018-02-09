# include <iostream>
# include <conio.h>
using namespace std;

int Uczniowie, Cukierki, x, y;


int main()
{
	cout << "Ilu uczniow jest w twojej klasie:";
	cin >> Uczniowie;
	cout << "Ile cukierkow kupila mama:";
	cin >> Cukierki;

	x = Cukierki / (Uczniowie - 1);
	cout << "Cukierkow dla kazdego ucznia:" << x;

	y = Cukierki - x*(Uczniowie - 1);
	cout << "Cukierkow dla Jasia:" << y;

	system("PAUSE");

	return 0;
}
