/*	Ty�n nimi: Harjoitus 5
	Tekij�: Mikael Schildt
	Kuvaus teht�v�st�:

	Kirjoita ohjelma, joka pyyt�� k�ytt�j�lt� kaksi kokonaislukua.

	Ohjelma tulostaa tekstin BINGO, mik�li luvut ovat samoja.

	Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
*/

#include <iostream>
using namespace std;


void main()
{
	int luku1;
	int luku2;
	cout << "Sy�t� luku: ";
	cin >> luku1;
	cout << "Sy�t� toinen luku: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	else cout << "BONGO\n";
}

