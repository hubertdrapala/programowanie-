// tablice 1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	//zad 1
	/*const int roz = 10;
	int tab[roz], x = 3;

	for (int i = 0; i < roz; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}*/

	//zad 2

	/*const int roz = 10;
	int tab[roz], x = 3;

	for (int i = 0; i < roz; i += 2)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 6;

	}*/

	//zad 3 

	
	/*const int roz = 5;
	int tab[roz], a , x = 0;
	cout << "podaj wartosc a: ";
	cin >> a;
	for (int i = roz - 1; i >= 0; i--)
	{
		tab[i] = a - x;
		x += 5;
	}
	for (int i = 0; i < roz; i++)
	{
		cout << tab[i] << " ";
	}*/

	//zad4
	
	/*int losowa_liczba, min;


	int tab[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{

		losowa_liczba=rand() % 50 - 23;
		tab[i] = losowa_liczba;
		cout << "tab[" << i << "]= " << losowa_liczba << endl;
	}
	min = tab[0];
	for (int i=1;i<10;i++)
	{
		if (min > tab[i])
		{
			min = tab[i];
		}
	}*/
	
	//zad 5

	/*int a, b, n;

	cout << "podaj 2 pierwsze wartosci " << endl;
	cin >> a;
	cin >> b;
	cout << "podaj ile chcesz wypisac wyrazow ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << b << " ";
		b += a;
		a = b - a;
	}*/

	//zad 6

		/*int tab[20] = { 0,1,2,3,4,5,6,7,8,9 };
		for (int i = 0; i < 10; i++)
		{
			tab[i + 10] = tab[i];
		}
		for (int i = 0; i < 20; i++)
		{
			cout << "tab[" << i << "]= " << tab[i] << endl;
		}*/

	//zad 7

	/*int tab1[3][3] =
	{
		{1,0,0},
		{0,2,0},
		{0,0,3}

	};
	int suma = 0;
	for (int i = 0, j = 0; i < 3; i++, j++)
	{
		suma += tab1[i][j];
	}
	cout << "suma przekatnych macierzy wynosi: " << endl;
	cout << suma << endl;*/


}
