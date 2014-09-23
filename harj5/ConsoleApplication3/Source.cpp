/*	Työn nimi: Harjoitus 5
	Tekijä: Mikael Schildt
	Kuvaus tehtävästä:

	Kirjoita ohjelma, joka pyytää käyttäjältä kaksi kokonaislukua.

	Ohjelma tulostaa tekstin BINGO, mikäli luvut ovat samoja.

	Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
*/

#include <iostream>
using namespace std;


void main()
{
	int luku1;
	int luku2;
	cout << "Syötä luku: ";
	cin >> luku1;
	cout << "Syötä toinen luku: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	else cout << "BONGO\n";
}

