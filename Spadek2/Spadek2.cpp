// Spadek2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "math.h"
#include <cmath>
#include <conio.h>
using namespace std;


int main()
{
	double j = -1, p = 0, d, d1, d2, y1, y2, c = 0.300, Pr, pi = 3.14;
	int h1 = 100, h2 = 3, f;
	cout<<"Podaj wartosc mniejsza niz 1: ";
	cin>>f;
	
	for (int x = 0; x<10; x++)
	{
		d = 10 * x + 10;
		d1 = d* sqrt(pow(h1 - h2, 2) / d) + 1;
		d2 = d* sqrt(pow(h1 + h2, 2) / d) + 1;
		y1 = (-2 * pi* f  * d1) / c;
		y2 = (-2 * pi* f  * d2) / c;
		Pr = (exp(j*y1) / d1) - (exp(j*y2) / d2);
		Pr = pow(abs(Pr), 2);
		Pr = log10(Pr) * 10;

		cout << "Dla " << d << " metrow, spadek mocy wynosi: " << Pr << endl;
	}

	system("PAUSE");
	return 0;
}

