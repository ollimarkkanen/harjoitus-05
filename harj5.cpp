/* Ty�n nimi: Harjoitus 5
* Tekij�: Olli Markkanen
* Kuvaus teht�v�st�:
*	Kirjoita ohjelma, joka pyyt�� k�ytt�j�lt� kaksi kokonaislukua.
*	Ohjelma tulostaa tekstin BINGO, mik�li luvut ovat samoja.
*	Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
* P�iv�m��r�: 9.9.2014
* Versio: 1.0
*/

#include <iostream>
using namespace std;
void main()
{
	int luku1;
	cout << "Sy�t� luku1: ";
	cin >> luku1;
	int luku2;
	cout << "Sy�t� luku2: ";
	cin >> luku2;
	if (luku1 == luku2)
		cout << "BINGO\n";
	if (luku1 != luku2)
		cout << "BONGO\n";
	cin.get();
}